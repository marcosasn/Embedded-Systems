/*
 * MainCirculo.cpp
 *
 *  Created on: Aug 8, 2013
 *      Author: Marcos Antônio Silva Nascimento
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"
#include "Circulo.h"

using namespace std;

int mainCirculo(void) {
	Ponto *p1 = new Ponto(0, 0);
	Circulo *c1 = new Circulo((*p1),2);
	Circulo *c2 = new Circulo((*p1),2);

	cout << c1->getRaio();

	cout << c1->perimetro();
	cout << c1->area();
	cout << c1->equals((*c2));

	return EXIT_SUCCESS;
}


