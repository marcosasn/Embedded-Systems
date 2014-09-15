/*
 * Circulo.h
 *
 *  Created on: Aug 8, 2013
 *      Author: Marcos Antônio Silva Nascimento
 */

#ifndef _CIRCULO_
#define _CIRCULO_
#include "Ponto.h"

class Circulo {
	private:
	Ponto centro;
	int raio;

	public:
	Circulo();
	Circulo(Ponto centro, int raio);
	Ponto getCentro();
	int getRaio();
	void setCentro(Ponto centro);
	void setRaio(int raio);
	bool equals(Circulo &outro);
	double area();
	double perimetro();
};

#endif // _CIRCULO_






