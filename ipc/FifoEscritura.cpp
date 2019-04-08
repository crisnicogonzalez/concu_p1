#include <iostream>
#include "FifoEscritura.h"

FifoEscritura::FifoEscritura(const std::string nombre) : Fifo(nombre) {
}

FifoEscritura::~FifoEscritura() {
}

void FifoEscritura::abrir() {
	fd = open ( nombre.c_str(),O_WRONLY );
    std::cout << "[DEBUG] open file :" << nombre.c_str() <<" O_WRONLY " <<"fd: "<<fd<<std::endl;
}

ssize_t FifoEscritura::escribir(const void* buffer,const ssize_t buffsize) const {
    std::cout << "[FifoEscritura][DEBUG] Writing "<<buffsize << " bytes"<< std::endl;
	return write ( fd,buffer,buffsize );
}
