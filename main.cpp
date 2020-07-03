#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <sys/ioctl.h>

#include "pugixml/pugixml.hpp"
#include "pugixml/pugixml.cpp"
#include "pugixml/pugiconfig.hpp"

using namespace std;

struct position {
public:
    std::string name;
};

#include "headers/cl_console_explorrer.h"
#include "headers/cl_worker.h"
#include "headers/cl_application.h"


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
