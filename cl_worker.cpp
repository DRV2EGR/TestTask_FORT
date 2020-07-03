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
            bool f = false;
            for (int j = 0; j < positions.size(); ++j) {
                if (positions[j].name == name_removable) {
                    positions.erase(positions.begin() + j); f = true;
                }
            }
            if (!f) {
                rem_err();
            }
        }
    }
}

void worker::show_list_of_positions()
{
    write_positions_list(positions);
}

void worker::search_for_position()
{
    int nom_positions = inp_nomber();
    for(int i = 0; i < nom_positions; ++i) {

        string name_searchable = read_new_symbols();
        if (name_searchable == "~") { return; }

        bool f = false; vector<int> pos_of_find;
        for (int j = 0; j < positions.size(); ++j) {
            if (positions[j].name == name_searchable) { f = true; pos_of_find.push_back(j); }
        }

        if (f) { finded_position(name_searchable, pos_of_find); }
        else { not_finded_position(name_searchable); }
    }
}

void worker::load_data()
{
    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file("data.xml");

    string _doc = "<xml>"
    "<n>0</n>"
    "</xml>";

    if (!result) {
        ofstream file;
        file.open("data.xml");
        file << _doc;
        file.close();
    }

    int _n = doc.child("xml").child("n").text().as_int();

    for (int i = 0; i < _n; ++i) {
        string _s = "data" + to_string(i);
        const char *cstr = _s.c_str();

        position _position; _position.name = doc.child("xml").child(cstr).text().as_string();
        positions.push_back(_position);
    }
}

void worker::save_data()
{
    string _doc = "<xml>"
    "<n>" + to_string(positions.size()) + "</n>";

    for (int i = 0; i < positions.size(); ++i) {
        _doc += "<data" + to_string(i) + ">" + positions[i].name + "</data" + to_string(i) + ">";
    }

    _doc += "</xml>";

    ofstream file;
    file.open("data.xml", ios_base::trunc);
    file << _doc;
    file.close();
}