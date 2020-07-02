#ifndef CL_CONSOLE_EXPLORRER_H
#define CL_CONSOLE_EXPLORRER_H

class console_explorrer {

public:
    
    void write_positions_list(vector <position>& list);

    string read_new_symbols(); // returns name position

    void err_inp();
    int inp_nomber();
    int get_operation();
};

#include "../cl_console_explorrer.cpp"

#endif 