/*
 * Circulo.cpp
 *
 *  Created on: Aug 8, 2013
 *      Author: Marcos Antônio Silva Nascimento
 */

#include "Ponto.h"
#include "Circulo.h"
#include <math.h>
#define PI 3.14159

Circulo::Circulo() {
	this->centro = Ponto(0,0);
	this->raio = 0;
}

Circulo::Circulo(Ponto centro, int raio) {
	this->centro = centro;
	this->raio = raio;
}

Ponto Circulo::getCentro() {
	return centro;
}

int Circulo::getRaio() {
	return raio;
}

void inline Circulo::setCentro(Ponto centro) {
	this->centro = centro;
}

void inline Circulo::setRaio(int raio) {
	this->raio = raio;
}

bool Circulo::equals(Circulo &outro) {
	if (this->getRaio() == outro.getRaio() && this->getCentro().equals(outro.getCentro())) {
		return true;
	}
	return false;
}

double Circulo::area() {
	return PI * pow(getRaio(),2);
}

double Circulo::perimetro() {
	return 2 * PI * getRaio();
}
