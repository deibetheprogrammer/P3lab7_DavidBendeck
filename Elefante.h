#ifndef ELEFANTE_H
#define ELEFANTE_H

#include "Pieza.h"

class Elefante : public Pieza
{
	public:
		Elefante(int, int, bool,Pieza***);
		
		bool Movimiento(int,int);
		
		~Elefante();
	protected:
};

#endif
