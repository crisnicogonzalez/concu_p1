//
// Created by cristiangonzalez on 06/04/19.
//

#ifndef NEWS_SERVICE_REQUESTSERIALIZER_H
#define NEWS_SERVICE_REQUESTSERIALIZER_H


#include <vector>
#include "../request/Request.h"



using namespace std;

class RequestSerializer {
public:
    std::string serialize(Request request);
    Request deserialize(const std::string& requestSerialized);

protected:
    vector<string> split(const std::string &s, char delim);

};




#endif //NEWS_SERVICE_REQUESTSERIALIZER_H
