/*
 * Gerente.h
 *
 *  Created on: Aug 14, 2013
 *      Author: Win7
 */

#ifndef GERENTE_H_
#define GERENTE_H_
#include "Empregado.h"

class Gerente:public Empregado {
private:
	int numEmpregados;
	Empregado *empregados[];

public:
	Gerente(string nome, string email, string celular, double salario, string departamento, int numEmpregados, Empregado *gerenciados[]);
	Empregado getEmpregados();
	int getNumEmpregados();
	void addEmpregado(Empregado emp1);
};

#endif /* GERENTE_H_ */
