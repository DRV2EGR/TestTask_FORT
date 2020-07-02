//#include "headers/cl_console_worker.h"


void console_explorrer::err_inp()
{
    std::cout << "Something went wrong!\n" 
                        << "Please, try again!" << std::endl;
}

int console_explorrer::inp_nomber()
{
    cout << "Input nomber of positions: " << std::endl;
    int nom; std::cin >> nom;
    return nom;
}

void console_explorrer::write_positions_list(vector <position> & list)
{
    std::cout << "LIST OF POSITIONS: ";

    for(int i = 0; i < list.size(); ++i) {
        std::cout << list[i].name << " ";
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
