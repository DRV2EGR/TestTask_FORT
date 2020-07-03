//#include "headers/cl_application.h"
/*application()
{

}*/

/**
 * @brief Main application method
 * 
 * Iterating while user will not exit,
 * offers all actionf of program
 * 
 */
int application::exec_app()
{
    worker wor;
    wor.load_data();

    struct winsize sz;

    // clear screen
    clear_screen(sz);

    for (;;) {
        

        int oper = get_operation();
        
        if (oper == 1) {

            clear_screen(sz);
            wor.add_position();
            clear_screen(sz);

        } else if (oper == 2) {
           
            clear_screen(sz);
            wor.remove_position();
            
        } else if (oper == 3) {
            
            clear_screen(sz);
            wor.show_list_of_positions();
            
        } else if (oper == 4) {

            clear_screen(sz);
            wor.search_for_position();

        } else if (oper == 0) {
            break;
        } else {

            clear_screen(sz);
            err_inp();
        }

        
    }

    wor.save_data();
}

/*~application()
{

}*/
