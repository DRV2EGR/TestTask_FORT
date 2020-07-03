//#include "headers/cl_console_worker.h"


void console_explorrer::err_inp()
{
    std::cout << "Something went wrong!\n" 
                        << "Please, try again!" << std::endl;
}

int console_explorrer::inp_nomber()
{
    cout << "Input nomber of positions: " << std::endl;
    string nom; 

    for (;;) {
        std::cin.ignore(32767,'\n');
        std::cin >> nom; 

        bool f = true;
        for (int i = 0; i < nom.size(); ++i) {
            if (nom.at(i) != '0' && nom.at(i) != '1' && nom.at(i) != '2' && 
            nom.at(i) != '3' && nom.at(i) != '4' && nom.at(i) != '5' && 
            nom.at(i) != '6' && nom.at(i) != '7' && nom.at(i) != '8' && 
            nom.at(i) != '9') { f = false; }
        }

        if (f) { 
            std::cin.ignore(32767,'\n');
            break;
        }

        err_inp();
    }
    
    int ret = atof(nom.c_str());
    return ret;
}

void console_explorrer::write_positions_list(vector <position> & list)
{
    std::cout << "LIST OF POSITIONS: ";

    for(int i = 0; i < list.size(); ++i) {
        std::cout << list[i].name;

        if (i == (list.size()-1) ) { std::cout <<  "." << std::endl; }
        else { std::cout << ", "; }
    }

    std::cout << endl;
}

string console_explorrer::read_new_symbols()
{
    cout << "Waiting input. To cancel or exit input ~!" << endl;
    
    std::string cmd;
    std::cin >> cmd;

    return cmd;
    
}

int console_explorrer::get_operation()
{
    std::cout << "Please, input command from list bellow:\n"
                        << "1) INP - to input some positions\n"
                        << "2) DEL - to delete some positions\n"
                        << "3) LST - to display entered positions\n"
                        << "4) SRH - to search a position\n"
                        << "5) ~ - to exit" << std::endl;
    
    std::string cmd; std::cin >> cmd;

    if (cmd == "INP") {
        return  1;
    } else if (cmd == "DEL") {
        return  2;
    } else if (cmd == "LST") {
        return  3;
    } else if (cmd == "SRH") {
        return  4;
    } else if (cmd == "~") {
        std::cout << "Goodbye!" << std::endl;
        return 0;
    } else {
        err_inp();
        return -1;
    }
}

void console_explorrer::rem_err()
{
    std::cout << "Position wasn't deleted!" << endl;
}

void console_explorrer::finded_position(std::string name_finded, std::vector <int>& po)
{
    std::cout << "Position " << name_finded << " finded at place(s): ";
    for (int i = 0; i < po.size(); ++i) { 

        if (i == (po.size()-1) ) { std::cout << po[i] << "." << std::endl; }
        else { std::cout << po[i] << ", "; }

    }

    std::cout << "\n" << std::endl;
}

void console_explorrer::not_finded_position(std::string name_finded)
{
    std::cout << "Position " << name_finded << " didn't finded.\n" << std::endl;
}
