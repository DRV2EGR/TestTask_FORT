#ifndef CL_APPLICATION_H
#define CL_APPLICATION_H

/**
 * @class application
 * @brief Main application class
 * 
 * Main mathod of application
 * Connecting all classes
 */
class application : public console_explorrer {
public:

    //application(); // creating system
    void exec_app(); // executing our app
    //~application();
    
};

#include "../src/cl_application.cpp"

#endif 
