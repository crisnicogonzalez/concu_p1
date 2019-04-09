//
// Created by cristiangonzalez on 06/04/19.
//

#ifndef NEWS_SERVICE_CONSTANTS_H
#define NEWS_SERVICE_CONSTANTS_H


#include <string>


//Para comunicarse con el servicio de cotizacion
static std::string KEY_REQUEST_SENDER_CHANNEL_QUOTE = "/tmp/CR-FQS";
//Para comunicarse con el servicio de clima
static std::string KEY_REQUEST_SENDER_CHANNEL_WEATHER = "/tmp/CR-WS";
//Para comunicarse con el servicio de portal
static std::string KEY_PORTAL_CHANNEL = "/tmp/CR-PS";


static int BUFFER_SIZE = 100;

class Constants {
};


#endif //NEWS_SERVICE_CONSTANTS_H
