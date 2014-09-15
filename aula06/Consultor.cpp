/*
 * Consultor.cpp
 *
 *  Created on: Aug 14, 2013
 *      Author: Win7
 */

#include "Consultor.h"
#include "Temporario.h"
#include "Gerente.h"

Consultor::Consultor(string nome, string email, string celular, double salario, string departamento, int numEmpregados,string data, int num, string area):Temporario(data, num), Gerente(nome, email, celular, salario, departamento,numEmpregados) {
	this->area = area;
}

string Consultor::getArea() {
	return area;
}

void Consultor::setArea(string area) {
	this->area = area;
}


