//#include "headers/cl_worker.h"

bool worker::add_position()
{
    int nom_positions = inp_nomber();
    for(int i = 0; i < nom_positions; ++i) {

        string position_addable = read_new_symbols();

        if (position_addable == "~") { return false; }
        else {
            position pos; pos.name = position_addable;
            positions.push_back(pos);
        }
    }

    return true;
}

void worker::remove_position()
{
    int nom_positions = inp_nomber();
    for(int i = 0; i < nom_positions; ++i) {

        string name_removable = read_new_symbols();

        if (name_removable == "~") { return; }
        else {

            for (int j = 0; j < positions.size(); ++j) {
                if (positions[j].name == name_removable) {
                    positions.erase(positions.begin() + j);
                }
            }
        }
    }
}

void worker::show_list_of_positions()
{
    write_positions_list(positions);
}

void worker::search_for_position(string name_searchable)
{

}
