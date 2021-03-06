cmake_minimum_required(VERSION 3.10.2)
project(concu_p1)

set(CMAKE_CXX_STANDARD 11)

add_executable(news_service main.cpp
        service/WeatherService.cpp service/WeatherService.h
        service/FinancialQuotationService.cpp service/FinancialQuotationService.h
        PortalMenu.cpp PortalMenu.h
        Administrator.cpp Administrator.h
        request/Request.cpp request/Request.h
        request/Resource.cpp request/Resource.h
        request/HTTPMethod.cpp request/HTTPMethod.h
        request/RequestBuilder.cpp request/RequestBuilder.h
        client/Client.cpp client/Client.h
        client/WeatherClient.cpp client/WeatherClient.h
        client/FinancialQuotationClient.cpp
        client/FinancialQuotationClient.h
        dto/WeatherDTO.cpp dto/WeatherDTO.h
        ipc/Fifo.cpp ipc/Fifo.h
        ipc/FifoEscritura.cpp ipc/FifoEscritura.h
        ipc/FifoLectura.cpp ipc/FifoLectura.h
        utils/Constants.cpp utils/Constants.h serializer/RequestSerializer.cpp serializer/RequestSerializer.h service/PortalService.cpp service/PortalService.h client/PortalClient.cpp client/PortalClient.h service/Service.cpp service/Service.h serializer/WeatherSerializer.cpp serializer/WeatherSerializer.h dto/FinancialQuotationDTO.cpp dto/FinancialQuotationDTO.h dto/ResponseDTO.cpp dto/ResponseDTO.h serializer/FinancialQuotationSerializer.cpp serializer/FinancialQuotationSerializer.h
        signal/EventHandler.h
        signal/SIGINT_Handler.h
        signal/SignalHandler.cpp
        signal/SignalHandler.h
        ReadResult.cpp ReadResult.h)
