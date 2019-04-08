#include <iostream>
#include "Administrator.h"



Administrator::Administrator() {
    std::cout<< "Administrator constructor" << std::endl;
}


Administrator::~Administrator() {
    std::cout << "Administrator destructor" << std::endl;
}


void Administrator::init() {
    std::cout << "Init" << std::endl;
}