#include <utility>

#include <utility>

#include <iostream>
#include "PortalMenu.h"
#include "request/RequestBuilder.h"


using namespace std;

PortalMenu::PortalMenu() {
    cout << "[DEBUG] To init Portal is neccesary that the services is runned" << endl;
}


PortalMenu::~PortalMenu() {
    cout << "Portal destructor" << endl;
}

void PortalMenu::showMenu() {
    cout << "Portal initiliaze" << endl;
    showMenuToSelectRol();
}

WeatherDTO PortalMenu::buildWeather(string cityId){
    WeatherDTO weather;
    weather.setCityId(std::move(cityId));
    std::string buffer;
    cout << "Ingrese el humedad:";
    getline(cin,buffer);
    weather.setHumidity(atoi(buffer.c_str()));
    cout << "Ingrese la presión:";
    getline(cin,buffer);
    weather.setPressure(atoi(buffer.c_str()));
    cout << "Ingrese la temperatura:";
    getline(cin,buffer);
    weather.setTemperature(atoi(buffer.c_str()));
    return weather;
}

FinancialQuotationDTO PortalMenu::buildFinancialQuotation(string coinId) {
    FinancialQuotationDTO financialQuotation;
    std::string buffer;
    financialQuotation.setCoinId(std::move(coinId));
    cout << "Ingrese precio de venta:";
    getline(cin,buffer);
    financialQuotation.setSale(atof(buffer.c_str()));
    cout << "Ingrese precio de compra:";
    getline(cin,buffer);
    financialQuotation.setPurchase(atof(buffer.c_str()));
    return financialQuotation;


}

void PortalMenu::showAdministratorMenu() {
    std::string buffer;
    cout << "¿Qué desea cambiar?" << endl;
    cout << "A : Temperatura,presión atmosférica y humedad" << endl;
    cout << "B : Cotización de monedas extranjeras" << endl;
    getline(cin,buffer);
    if(buffer == "A"){
        std::cout << "Eliga la ciudad que desea cambiar sus valores" << std::endl;
        std::cout << "1 - Ciudad de Mexico" << std::endl;
        std::cout << "2 - Buenos Aires" << std::endl;
        std::cout << "3 - San Pablo" << std::endl;
        getline(std::cin,buffer);
        WeatherDTO weatherDto = buildWeather(buffer);
        client.updateWeather(weatherDto);
    }
    else if(buffer == "B"){
        std::cout << "Eliga la moneda que desea cambiar su cotización" << std::endl;
        std::cout << "1 - Real" << std::endl;
        std::cout << "2 - Dolar" << std::endl;
        std::cout << "3 - Euro" << std::endl;
        getline(std::cin,buffer);
        FinancialQuotationDTO financialQuotation = buildFinancialQuotation(buffer);
        client.updateFinancialQuotation(buffer,financialQuotation);
    }
}

void PortalMenu::showMenuToSelectRol(){
    std::string buffer;
    cout << "¿Cómo desea conectarse?" << endl;
    cout << "1 - Como Administrador" << endl;
    cout << "2 - Como Client" << endl;
    getline(std::cin,buffer);
    if(buffer == "2"){
        showClientMenu();
    }else if(buffer == "1"){
        showAdministratorMenu();
    }
}



void PortalMenu::showClientMenu() {
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
        showClientMenu();
    }
}