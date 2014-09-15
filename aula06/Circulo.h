/*
 * Circulo.h
 *
 *  Created on: Aug 14, 2013
 *      Author: Win7
 */

#ifndef CIRCULO_H_
#define CIRCULO_H_
#include "ElementoGeometrico.h"

class Circulo: public ElementoGeometrico {
private:
	int raio;

public:
	Circulo(int raio);
	float perimetro();
	float area();
	int getRaio();
	void setRaio(int raio);
};

#endif /* CIRCULO_H_ */
