#include <iostream>
#include "Fifo.h"

Fifo::Fifo(const std::string nombre) : nombre(nombre), fd(-1) {
    std::cout << "[FIFO] [DEBUG] create FIFO "<< nombre << std::endl;
	mknod( static_cast<const char*>(nombre.c_str()),S_IFIFO|0666,0 );
}


Fifo::Fifo() {}

Fifo::~Fifo() {
    std::cout << "[FIFO] [DEBUG] Detroit fifo with name: " << nombre <<std::endl;
}

void Fifo::cerrar() {
	close ( fd );
	fd = -1;
}

void Fifo::eliminar() const {
	unlink(nombre.c_str());
}
