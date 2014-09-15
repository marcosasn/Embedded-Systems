/*
 * Temporario.cpp
 *
 *  Created on: Aug 14, 2013
 *      Author: Win7
 */

#include "Temporario.h"
#include <string>
using namespace std;

Temporario::Temporario(string data, int num) {
	dataInicio = data;
	numMeses = num;
}

string Temporario::getDataInicio() {
	return dataInicio;
}

void Temporario::setDataInicio(string data) {
	dataInicio = data;
}

int Temporario::getNumMeses() {
	return numMeses;
}

void Temporario::setNumMeses(int numMeses) {
	this->numMeses = numMeses;
}
