/*
 * Quadrado.cpp
 *
 *  Created on: Aug 14, 2013
 *      Author: Win7
 */

#include "Quadrado.h"
#include <math.h>

Quadrado::Quadrado(int lado) {
	this->lado = lado;
}

int Quadrado::getLado() {
	return lado;
}

void Quadrado::setLado(int lado) {
	this->lado = lado;
}

float Quadrado::area() {
	return pow(lado, 2);
}

float Quadrado::perimetro(){
	return 4 * lado;
}

