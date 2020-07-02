//#include "headers/cl_application.h"
/*application()
{

}*/

int application::exec_app()
{
    worker wor;
    struct winsize sz;

    for (;;) {
        

        int oper = get_operation();
        
        if (oper == 1) {
            // clear screen
            for (int k = 0; k < sz.ws_row; ++k) { cout  << "\n"; }
            
            wor.add_position();

        } else if (oper == 2) {
            // clear screen
            for (int k = 0; k < sz.ws_row; ++k) { cout  << "\n"; }
        
            wor.remove_position();

        } else if (oper == 3) {
            // clear screen
            for (int k = 0; k < sz.ws_row; ++k) { cout  << "\n"; }
            
            wor.show_list_of_positions();
            
        } else if (oper == 4) {
            //wor->search_for_position();
        } else if (oper == 0) {
            break;
        } else {
            err_inp();
        }

        
    }

    return 0;
}

/*~application()
{

}*/
