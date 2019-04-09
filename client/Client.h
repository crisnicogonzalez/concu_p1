#ifndef NEWS_SERVICE_CLIENT_H
#define NEWS_SERVICE_CLIENT_H


#include <string>
#include "../request/RequestBuilder.h"
#include "../ipc/Fifo.h"
#include "../ipc/FifoEscritura.h"
#include "../ipc/FifoLectura.h"
#include "../serializer/RequestSerializer.h"

using namespace std;

class Client {
public:
    Client();
    ~Client();
    bool send(FifoEscritura fifo,string message);
    bool sendToChannel(string rec,string intm,string sender, string message);
    string readOfChannel(string rec,string intm,string sender);
protected:
    string readOfChannel(string channel);
    std::string resource;
    RequestBuilder builder;
    RequestSerializer serializer;
};


#endif //NEWS_SERVICE_CLIENT_H
