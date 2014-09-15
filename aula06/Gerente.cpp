/*
 * Gerente.cpp
 *
 *  Created on: Aug 14, 2013
 *      Author: Win7
 */

#include "Gerente.h"
#include "Empregado.h"
#include <string>

Gerente::Gerente(string nome, string email, string celular, double salario, string departamento, int numEmpregados, Empregado *empregados[]):Empregado(nome, email, celular, salario, departamento) {
	this->numEmpregados = numEmpregados;
	this->empregados = empregados;
}

Empregado Gerente::getEmpregados() {
	return empregados;
}

int Gerente::getNumEmpregados(){
	return numEmpregados;
}

void Gerente::addEmpregado(Empregado emp1) {
	int contador = 0;
	if (contador <= numEmpregados) {
		empregados[contador] = emp1;
		contador ++;
	}
}

