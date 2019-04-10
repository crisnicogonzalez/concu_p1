#include <iostream>
#include "Fifo.h"

Fifo::Fifo(const std::string nombre) : nombre(nombre), fd(-1) {
    std::cout << "[FIFO] [DEBUG] create FIFO "<< nombre << std::endl;
	mknod( static_cast<const char*>(nombre.c_str()),S_IFIFO|0666,0 );
}


Fifo::Fifo() {}

Fifo::~Fifo() {
}

void Fifo::cerrar() {
    std::cout << "[FIFO] [DEBUG] close: " << nombre <<std::endl;
    close ( fd );
	fd = -1;
}

void Fifo::eliminar() const {
    std::cout << "[FIFO] [DEBUG] delete: " << nombre <<std::endl;
    unlink(nombre.c_str());
}
