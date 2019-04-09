//
// Created by cristiangonzalez on 07/04/19.
//

#include <vector>
#include <sstream>
#include "WeatherSerializer.h"


WeatherDTO WeatherSerializer::deserialize(std::string weatherSerialized) {
    vector<string> requestSplitted = split(weatherSerialized,'-');
    WeatherDTO weather;
    weather.setName(requestSplitted[0]);
    weather.setHumidity(atoi(requestSplitted[1].c_str()));
    weather.setPressure(atoi(requestSplitted[2].c_str()));
    weather.setTemperature(atoi(requestSplitted[3].c_str()));
    return weather;
}


std::string WeatherSerializer::serialize(WeatherDTO weather) {
    ostringstream os;
    os << weather.getName() << "-"<<weather.getHumidity() << "-" << weather.getPressure() << "-" << weather.getTemperature() << ";";
    return os.str();
}

vector<string> WeatherSerializer::split(const string &s, char delim) {
    vector<string> result;
    stringstream ss (s);
    string item;

    while (getline (ss, item, delim)) {
        result.push_back (item);
    }

    return result;
}