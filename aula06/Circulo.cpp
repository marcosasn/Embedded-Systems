/*
 * Circulo.cpp
 *
 *  Created on: Aug 14, 2013
 *      Author: Win7
 */

#include "Circulo.h"
#define PI 3.14159
#include <math.h>

Circulo::Circulo(int raio) {
	this->raio = raio;
}

int Circulo::getRaio(){
	return raio;
}

void Circulo::setRaio(int raio) {
	this->raio = raio;
}

float Circulo::area() {
	return PI * pow(getRaio(),2);
}

float Circulo::perimetro() {
	return 2 * PI * raio;
}
