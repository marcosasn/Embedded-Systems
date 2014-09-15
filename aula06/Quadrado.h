/*
 * Quadrado.h
 *
 *  Created on: Aug 14, 2013
 *      Author: Win7
 */

#ifndef QUADRADO_H_
#define QUADRADO_H_
#include "ElementoGeometrico.h"

class Quadrado: public ElementoGeometrico {
private:
	int lado;

public:
	Quadrado(int lado);
	int getLado();
	void setLado(int lado);
	float area();
	float perimetro();
};

#endif /* QUADRADO_H_ */
