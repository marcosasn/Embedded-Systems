/*
 * Secretaria.h
 *
 *  Created on: Aug 14, 2013
 *      Author: Win7
 */

#ifndef SECRETARIA_H_
#define SECRETARIA_H_
#include "Empregado.h"

class Secretaria:public Empregado {
public:
	Secretaria(string nome, string email, string celular, double salario, string departamento);
};

#endif /* SECRETARIA_H_ */
