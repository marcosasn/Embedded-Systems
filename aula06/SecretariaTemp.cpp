/*
 * SecretariaTemp.cpp
 *
 *  Created on: Aug 14, 2013
 *      Author: Win7
 */

#include "SecretariaTemp.h"
#include "Temporario.h"
#include "Secretaria.h"

SecretariaTemp::SecretariaTemp(string nome, string email, string celular, double salario, string departamento, string data, int num):Secretaria(nome, email, celular, salario, departamento),Temporario(data,num) {
}

