//
// Created by cristiangonzalez on 06/04/19.
//

#ifndef NEWS_SERVICE_WEATHERDTO_H
#define NEWS_SERVICE_WEATHERDTO_H


#include <string>
#include <iostream>


using namespace std;

class WeatherDTO {

public:
    int getTemperature(){
        return temperature;
    }
    int getHumidity(){
        return humidity;
    }
    int getPressure(){
        return pressure;
    }

    string getName(){
        return name;
    }


    void setTemperature(int newTemperature){
        temperature = newTemperature;
    }

    void setHumidity(int newHumidity){
        humidity = newHumidity;
    }

    void setPressure(int newPressure){
        pressure = newPressure;
    }

    void setName(std::string newName){
        name = newName;
    }

    void print(){

        cout << "Ciudad      : " << name << endl;
        cout << "Humedad     : " << humidity << endl;
        cout << "Presión     : " << pressure << endl;
        cout << "Temperatura : " << temperature << endl;
    }


protected:
    int temperature;
    int humidity;
    int pressure;
    std::string name;
};


#endif //NEWS_SERVICE_WEATHERDTO_H
