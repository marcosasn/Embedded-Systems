/*
 * Ponto.h
 *
 *  Created on: Aug 8, 2013
 *      Author: Marcos Antônio Silva Nascimento
 */
  
#ifndef _PONTO_
#define _PONTO_
  
class Ponto{
	private:
    int x;
    int y;
  
	public:
    Ponto();
    Ponto(int x, int y);
    void setX(int x);
    void setY(int y);
    int getX();
    int getY();
    bool equals(Ponto outro);
    int distancia(Ponto p);
};
  
#endif // _PONTO_ 
