//#include "headers/cl_console_worker.h"

/**
 * @brief Input error
 * 
 * Prints error message
 * when it need
 *
 */
void console_explorrer::err_inp()
{
    std::cout << "Something went wrong!\n" 
                        << "Please, try again!" << std::endl;
}

/**
 * @brief Input Nomber
 * 
 * Imputs one integer nomber
 * 
 * @return Inputted nomber
 */
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

/**
 * @brief Printing all positions
 * 
 * Printing list of all positions
 * 
 * @param list List of positions
 * 
 */
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

/**
 * @brief Imput string.
 * 
 * Reading string from console
 * 
 * @warning Don't secured from user not correct input
 *
 * @todo Security from user not correct input
 */
string console_explorrer::read_new_symbols()
{
    cout << "Waiting input. To cancel or exit input ~!" << endl;
    
    std::string cmd;
    std::cin >> cmd;

    return cmd;
    
}

/**
 * @brief Imput one operation.
 * 
 * Reading string from console
 * whith is user operation
 * which program should do
 * 
 * @warning Don't secured from user not correct input
 *
 * @todo Security from user not correct input
 */
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

/**
 * @brief Error message from remove
 * 
 * If we can't remove positions
 * this method will notice user
 */
void console_explorrer::rem_err()
{
    std::cout << "Position wasn't deleted!" << endl;
}

/**
 * @brief Finded position
 * 
 * Printing list of places, where position
 * was finded and position description
 *
 * @param name_finded Name of finded position
 * @param po Places of finded position
 */
void console_explorrer::finded_position(std::string name_finded, std::vector <int>& po)
{
    std::cout << "Position " << name_finded << " finded at place(s): ";
    for (int i = 0; i < po.size(); ++i) { 

        if (i == (po.size()-1) ) { std::cout << po[i] << "." << std::endl; }
        else { std::cout << po[i] << ", "; }

    }

    std::cout << "\n" << std::endl;
}

/**
 * @brief Not finded position
 * 
 * Printing message if
 * we don't find such position
 *
 * @param name_finded Name of not finded position
 */
void console_explorrer::not_finded_position(std::string name_finded)
{
    std::cout << "Position " << name_finded << " didn't finded.\n" << std::endl;
}

/**
 * @brief Clearing screen
 */
void console_explorrer::clear_screen()
{
    #ifdef WINDOWS
        std::system("cls");
    #else
        // Assume POSIX
        std::system ("clear");
    #endif
}