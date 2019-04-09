//
// Created by cristiangonzalez on 07/04/19.
//

#ifndef NEWS_SERVICE_SERVICE_H
#define NEWS_SERVICE_SERVICE_H


#include "../ipc/FifoLectura.h"
#include "../client/Client.h"

using namespace std;

class Service {

protected:
    string readOfChannel(FifoLectura& channel);
    bool validateMessage(string message);
    bool  endsWith(std::string const &value, std::string const &ending);
    Client client;
    RequestSerializer requestSerializer;

};


#endif //NEWS_SERVICE_SERVICE_H
