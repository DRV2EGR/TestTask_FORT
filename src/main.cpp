#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdlib.h>
//#include <sys/ioctl.h>
#include <cstdlib>

#include "../libs/pugixml/pugixml.hpp"
#include "../libs/pugixml/pugixml.cpp"
#include "../libs/pugixml/pugiconfig.hpp"

using namespace std;

struct position {
public:
    std::string name;
};

#include "../libs/cl_console_explorrer.h"
#include "../libs/cl_worker.h"
#include "../libs/cl_application.h"


/**
 * @brief Main application method
 *
 */
int main()
{
    application ob_application;

    ob_application.exec_app();

    return 0; 
}
