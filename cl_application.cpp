//#include "headers/cl_application.h"
/*application()
{

}*/

int application::exec_app()
{
    worker wor;
    struct winsize sz;

    wor.load_data();

    // clear screen
    for (int k = 0; k < sz.ws_row; ++k) { cout  << "\n"; }

    for (;;) {
        

        int oper = get_operation();
        
        if (oper == 1) {
            // clear screen
            for (int k = 0; k < sz.ws_row; ++k) { cout  << "\n"; }
            
            wor.add_position();

            for (int k = 0; k < sz.ws_row; ++k) { cout  << "\n"; }

        } else if (oper == 2) {
            // clear screen
            for (int k = 0; k < sz.ws_row; ++k) { cout  << "\n"; }
        
            wor.remove_position();
            

        } else if (oper == 3) {
            // clear screen
            for (int k = 0; k < sz.ws_row; ++k) { cout  << "\n"; }
            
            wor.show_list_of_positions();
            
        } else if (oper == 4) {
            // clear screen
            for (int k = 0; k < sz.ws_row; ++k) { cout  << "\n"; }

            wor.search_for_position();

        } else if (oper == 0) {
            break;
        } else {
            // clear screen
            for (int k = 0; k < sz.ws_row; ++k) { cout  << "\n"; }

            err_inp();
        }

        
    }

    wor.save_data();
    
    return 0;
}

/*~application()
{

}*/
