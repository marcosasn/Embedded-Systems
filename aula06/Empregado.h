/*
 * Empregado.h
 *
 *  Created on: Aug 14, 2013
 *      Author: Win7
 */

#ifndef EMPREGADO_H_
#define EMPREGADO_H_
#include <string>
using namespace std;

class Empregado {
private:
	string nome;
	string email;
	string celular;
	double salario;
	string departamento;

public:
	Empregado(string nome, string email, string celular, double salario, string departamento);
	string getCelular();
	void setCelular(string celular);
	string getDepartamento();
	void setDepartamento(string departamento);
	string getEmail();
	void setEmail(string email);
	string getNome();
	void setNome(string nome);
	double getSalario();
	void setSalario(double salario);
};

#endif /* EMPREGADO_H_ */
