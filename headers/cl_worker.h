#ifndef CL_WORKER_H
#define CL_WORKER_H

class worker : public console_explorrer {
private:
    //vector <position> positions;

public:
    vector <position> positions;

    bool add_position();
    void remove_position();

    void show_list_of_positions();
    void search_for_position();

    void load_data();
    void save_data();
};

#include "../cl_worker.cpp"

#endif 