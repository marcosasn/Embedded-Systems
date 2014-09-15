/*
 * MainPonto.cpp
 *
 *  Created on: Aug 8, 2013
 *      Author: Marcos Antônio Silva Nascimento
 */
  
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"
  
using namespace std;
 
int mainPonto(void) {
    Ponto *p1 = new Ponto(1,2);
	Ponto *p2 = new Ponto(2,3);
	  
    cout << p1->getX() << endl;
    cout << p1->getY() << endl;
  
    p1->setX(10);
    p1->setY(10);
  
    cout << p1->getX() << endl;
    cout << p1->getY() << endl;
  
    cout << p1->equals((*p2)) << endl;
    cout << p1->distancia((*p2)) << endl;
  
    getchar();
    return EXIT_SUCCESS;
} 
