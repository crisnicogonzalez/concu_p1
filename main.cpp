#include <iostream>
#include <unistd.h>
#include <wait.h>
#include "service/WeatherService.h"
#include "service/FinancialQuotationService.h"
#include "PortalInterface.h"
#include "Administrator.h"
#include "service/PortalService.h"

using namespace std;

static string shut_down_key = "E";
static string admin_key = "A";
static string portal_key = "P";
static string quota_key = "QI";
static string temperature_key = "TI";
static string portal_service_key = "PS";

void showOptions(){
    string buffer;
    cout << "¿Que desea realizar?" << endl;
    cout << temperature_key << " : Inicializar el servicio de temperatura,presion y humedad" << endl;
    cout << quota_key << " : Inicializar el servicio de cotizacion" << endl;
    cout << portal_key << "  : Conectarse al Portal" << endl;
    cout << portal_service_key << " :Inicializar servicio de portal" << endl;
    cout << admin_key  << "  : Inicitalizar el Administrador" << endl;
    cout << shut_down_key <<"  : Salir" << endl;
}



int createPortal(){

    string buffer;
    while(shut_down_key != buffer){
        showOptions();
        getline(cin,buffer);
        if(shut_down_key == buffer){
            return 0;
        }
        else if(portal_key == buffer){
            std::cout << "[INFO] Inicializando portal ..." << std::endl;
            PortalInterface portal;
            portal.init();
        }
        else if(admin_key == buffer){
            std::cout << "Inicializando administrador ..." << std::endl;
            Administrator administrator;
            return 0;
        }else if(temperature_key == buffer){
            std::cout << "Inicializando informador de clima ..." << std::endl;
            WeatherService temperatureReporter;
            temperatureReporter.init();
            return 0;
        }
        else if(quota_key == buffer){
            std::cout << "Inicializando informador de cotización ..." << std::endl;
            FinancialQuotationService financialQuotationService;
            financialQuotationService.init();
            return 0;
        }else if(portal_service_key == buffer){
            std::cout << "Inicializando el servicio del portal ..." << std::endl;
            std::cout << "¿Desea que los servicios se respondan con delay? (S/N)";
            getline(cin,buffer);
            bool withDelay = false;
            if(buffer == "S"){
                withDelay = true;
            }
            std::cout << "¿Desea que los servicios se atiendan concurrentemente? (S/N)";
            getline(cin,buffer);
            bool concurrently = false;
            if(buffer == "S"){
                concurrently = true;
            }
            PortalService portal(withDelay,concurrently);
            portal.init();
        }


        else{
            cout << "Unrecognized character" << endl;
            cout << "Try again" << endl;
        }
    }
}




int main() {
    createPortal();
    //waitpid(portal_pid, nullptr,0);
}
