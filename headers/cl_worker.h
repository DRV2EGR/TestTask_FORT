#ifndef CL_WORKER_H
#define CL_WORKER_H

class worker : public console_explorrer {
private:
    vector <string> positions;

public:

    void add_position(int nom_positions, string name_addable);
    void remove_position(int nom_positions, string name_removable);

    void show_list_of_positions();
    void search_for_position(string name_searchable);
};

#endif 