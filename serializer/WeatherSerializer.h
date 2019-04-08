//
// Created by cristiangonzalez on 07/04/19.
//

#ifndef NEWS_SERVICE_WEATHERSERIALIZER_H
#define NEWS_SERVICE_WEATHERSERIALIZER_H


#include <string>
#include "../dto/WeatherDTO.h"

class WeatherSerializer {
public:
    std::string serialize(WeatherDTO weather);
    WeatherDTO deserialize(std::string weatherSerialized);
protected:
    vector<string> split(const std::string &s, char delim);
};


#endif //NEWS_SERVICE_WEATHERSERIALIZER_H
