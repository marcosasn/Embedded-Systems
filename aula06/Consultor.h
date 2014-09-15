/*
 * Consultor.h
 *
 *  Created on: Aug 14, 2013
 *      Author: Win7
 */

#ifndef CONSULTOR_H_
#define CONSULTOR_H_
#include <string>
#include "Temporario.h"
#include "Gerente.h"
using namespace std;

class Consultor: public Temporario, public Gerente {
private:
	string area;
public:
	Consultor(string nome, string email, string celular, double salario, string departamento, int numEmpregados,string data, int num, string area);
	string getArea();
	void setArea(string area);
};

#endif /* CONSULTOR_H_ */
