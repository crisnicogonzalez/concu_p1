//
// Created by cristiangonzalez on 07/04/19.
//

#include <iostream>
#include "Service.h"
#include "../utils/Constants.h"


string Service::readOfChannel(FifoLectura& channel) {
    cout << "[SERVICE] [DEBUG] read of channel:" << channel.getName() <<endl;
    char buffer[BUFFER_SIZE];
    ssize_t readBytes = 0;
    while(readBytes == 0){
        readBytes = channel.leer(static_cast<void*>(buffer),BUFFER_SIZE);
        if(readBytes == -1 ){
            cout << "[SERVICE] [ERROR] channel that doesn't have any processes writing to it" << endl;
        }
    }
    cout << "[SERVICE] [DEBUG] read bytes:" << readBytes <<endl;
    std::string message = buffer;
    message.resize(readBytes);
    return message;
}


bool Service::validateMessage(string message) {
    cout << "[Service] validate request: " << message << std::endl;
    return endsWith(message, ";");
}

bool Service::endsWith(std::string const &value, std::string const &ending)
{
    if (ending.size() > value.size()) return false;
    return std::equal(ending.rbegin(), ending.rend(), value.rbegin());
}
