/*
 * Empregado.cpp
 *
 *  Created on: Aug 14, 2013
 *      Author: Win7
 */

#include "Empregado.h"

Empregado::Empregado(string nome, string email, string celular, double salario, string departamento) {
	this->nome = nome;
	this->email = email;
	this->celular = celular;
	this->salario = salario;
	this->departamento = departamento;
}

string Empregado::getCelular() {
	return celular;
}

void Empregado::setCelular(string celular) {
	this->celular = celular;
}

string Empregado::getDepartamento() {
	return departamento;
}

void Empregado::setDepartamento(string departamento) {
	this->departamento = departamento;
}

string Empregado::getEmail() {
	return email;
}

void Empregado::setEmail(string email) {
	this->email = email;
}

string Empregado::getNome() {
	return nome;
}

void Empregado::setNome(string nome) {
	this->nome = nome;
}

double Empregado::getSalario() {
	return salario;
}

void Empregado::setSalario(double salario) {
	this->salario = salario;
}
