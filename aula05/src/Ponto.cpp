/*
 * Ponto.cpp
 *
 *  Created on: Aug 8, 2013
 *      Author: Marcos Antônio Silva Nascimento
 */
  
#include "Ponto.h"
#include <math.h>

Ponto::Ponto(){
	this-> x = 0;
	this->y = 0;
}

Ponto::Ponto(int x, int y) {
    this->x = x;
    this->y = y;
}
  
void Ponto::setX(int x) {
    this->x = x;
}
  
void Ponto::setY(int y) {
    this->y = y;
}
  
int inline Ponto::getX() {
    return this->x;
}
  
int inline Ponto::getY() {
    return this->y;
}
  
bool Ponto::equals(Ponto outro) {
    if (this->getX() == outro.getX() && this->getY() == outro.getY()) {
            return true;
    }
    return false;
}
  
int Ponto::distancia(Ponto p) {
    return sqrt(pow((this->getX() - p.getX()), 2) + pow((this->getY() - p.getY()),2));
} 
