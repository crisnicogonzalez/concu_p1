//
// Created by cristiangonzalez on 10/04/19.
//

#ifndef CONCU_P1_READRESULT_H
#define CONCU_P1_READRESULT_H


#include <string>

class ReadResult {
public:
    void setReadBytes(int bytes){
        readBytes = bytes;
    }

    void setMessage(std::string newMessage){
        message = newMessage;
    }

    bool isOk(){
        return readBytes > 0;
    }

    std::string getMessage(){
        return message;
    }

    int getReadBytes(){
        return readBytes;
    }
protected:
    int readBytes;
    std::string message;
};


#endif //CONCU_P1_READRESULT_H
