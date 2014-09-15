/*
 * SecretariaTemp.h
 *
 *  Created on: Aug 14, 2013
 *      Author: Win7
 */

#ifndef SECRETARIATEMP_H_
#define SECRETARIATEMP_H_
#include <string>
#include "Secretaria.h"
#include "Temporario.h"

class SecretariaTemp:public Secretaria, public Temporario {
public:
	SecretariaTemp(string nome, string email, string celular, double salario, string departamento, string data, int num);
};

#endif /* SECRETARIATEMP_H_ */
