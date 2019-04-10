//
// Created by cristiangonzalez on 07/04/19.
//

#ifndef NEWS_SERVICE_SERVICE_H
#define NEWS_SERVICE_SERVICE_H


#include "../ipc/FifoLectura.h"
#include "../client/Client.h"
#include "../ReadResult.h"

using namespace std;

class Service {

protected:
    ReadResult readOfChannel(FifoLectura& channel);
    bool validateMessage(const string& message);
    bool  endsWith(std::string const &value, std::string const &ending);
    Client client;
    RequestSerializer requestSerializer;
    void blockSignal();
};


#endif //NEWS_SERVICE_SERVICE_H
