/*
 * Temporario.h
 *
 *  Created on: Aug 14, 2013
 *      Author: Win7
 */

#ifndef TEMPORARIO_H_
#define TEMPORARIO_H_
#include <string>
using namespace std;

class Temporario {
private:
	string dataInicio;
	int numMeses;

public:
	Temporario(string data, int num);
	string getDataInicio();
	void setDataInicio(string data);
	int getNumMeses();
	void setNumMeses(int numMeses);
};

#endif /* TEMPORARIO_H_ */
