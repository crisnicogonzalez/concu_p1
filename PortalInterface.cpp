#include <iostream>
#include "PortalInterface.h"
#include "request/RequestBuilder.h"


PortalInterface::PortalInterface() {
    std::cout << "[DEBUG] To init Portal is neccesary that the services is runned" << std::endl;
}


PortalInterface::~PortalInterface() {
    std::cout << "Portal destructor" << std::endl;
}

void PortalInterface::init() {
    std::cout << "Portal initiliaze" << std::endl;
}


void PortalInterface::buildRequest() {
    std::string buffer;
    std::cout << "¿Qué desea saber?" << std::endl;
    std::cout << "A : Temperatura,presión atmosférica y humedad" << std::endl;
    std::cout << "B : Cotización de monedas extranjeras" << std::endl;
    getline(std::cin,buffer);
    if(buffer == "A"){
        std::cout << "¿De que ciudad desea saber?" << std::endl;
        std::cout << "1 - Ciudad de Mexico" << std::endl;
        std::cout << "2 - Buenos Aires" << std::endl;
        std::cout << "3 - San Pablo" << std::endl;
        getline(std::cin,buffer);
        client.get(CLIMA,buffer);
    }
    else if(buffer == "B"){
        std::cout << "¿De que moneda desea saber?" << std::endl;
        std::cout << "1 - Real" << std::endl;
        std::cout << "2 - Dolar" << std::endl;
        std::cout << "3 - Euro" << std::endl;
        getline(std::cin,buffer);
        client.get(COTIZACION,buffer);
    }else{
        std::cout << "[ERROR] Option desconocida, intenta devuelta..." << std::endl;
        buildRequest();
    }
}