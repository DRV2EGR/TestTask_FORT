#ifndef CL_WORKER_H
#define CL_WORKER_H

/**
 * @class worker
 * @brief Doing main operations with data
 * 
 * Class with methods, whitch
 * that work with all data, 
 * performing the necessary operations
 *
 * @param positions Vector with all our abstract positions
 * @param position Description of our abstract position
 */
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

#include "../src/cl_worker.cpp"

#endif 