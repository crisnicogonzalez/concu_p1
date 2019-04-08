#include <utility>

//
// Created by cristiangonzalez on 07/04/19.
//

#ifndef NEWS_SERVICE_RESPONSEDTO_H
#define NEWS_SERVICE_RESPONSEDTO_H


#include <string>

class ResponseDTO {
public:
    int getCode(){
        return code;
    }
    std::string getMessage(){
        return message;
    }

    void setCode(int newCode){
        code = newCode;
    }
    void setMessage(std::string newMessage){
        message = std::move(newMessage);
    }

protected:
    int code;
    std::string message;

};


#endif //NEWS_SERVICE_RESPONSEDTO_H
