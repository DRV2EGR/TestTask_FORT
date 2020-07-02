#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <sys/ioctl.h>
using namespace std;

struct position {
public:
    std::string name;
};

#include "headers/cl_console_explorrer.h"
#include "headers/cl_worker.h"
#include "headers/cl_application.h"

int main()
{
    application ob_application;

    int st = ob_application.exec_app();

    return st; 
}