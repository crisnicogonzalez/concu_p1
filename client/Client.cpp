#include <iostream>
#include <sstream>
#include "Client.h"
#include "../utils/Constants.h"

Client::Client(){
    std::cout << "[DEBUG] Connect to server" << std::endl;
}

bool Client::send(const FifoEscritura& fifo, string message) {
    size_t bytesWritten = fifo.escribir(static_cast<const void*>(message.c_str()),message.length());
    return bytesWritten == message.length();
}

string Client::readOfChannel(string channel) {
    cout << "[Client][INFO] read of channel " << channel << endl;
    FifoLectura fifoLectura(channel);
    fifoLectura.abrir();
    char buffer[BUFFER_SIZE];
    ssize_t readedBytes = fifoLectura.leer(static_cast<void*>(buffer),BUFFER_SIZE);
    std::string response = buffer;
    response.resize ( readedBytes );
    fifoLectura.cerrar();
    fifoLectura.eliminar();
    cout << "[Client][INFO] response received" << response << endl;
    return response;
}

string Client::readOfChannel(string rec,string intm,string sender) {
    std::ostringstream stringStream;
    stringStream << rec<<intm<<sender;
    return readOfChannel("/tmp/CR-"+stringStream.str());
}


bool Client::sendToChannel(string rec,string intm,string sender, string message) {
    std::ostringstream stringStream;
    stringStream << rec<<intm<<sender;
    string channel = "/tmp/CR-"+stringStream.str();
    cout << "[Client][INFO] send to channel " << channel << " message: " << message << endl;
    FifoEscritura fifoEscritura(channel);
    fifoEscritura.abrir();
    ssize_t writedBytes = fifoEscritura.escribir(static_cast<const void*>(message.c_str()),message.length());
    return writedBytes == message.length();
}


Client::~Client() {

}