#include <iostream>
#include "FifoLectura.h"

FifoLectura::FifoLectura(const std::string nombre) : Fifo(nombre) {
}

FifoLectura::FifoLectura() {
    fd = -1;
}

FifoLectura::~FifoLectura() {
}

void FifoLectura::abrir() {
    fd = open ( nombre.c_str(),O_RDONLY );
    std::cout << "[DEBUG] open file :" << nombre.c_str() <<" O_RDONLY " <<"fd: "<<fd<<std::endl;
}

ssize_t FifoLectura::leer(void* buffer,const ssize_t buffsize) const {
	return read ( fd,buffer,buffsize );
}


std::string FifoLectura::getName() {
    return nombre;
}
