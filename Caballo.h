#ifndef CABALLO_H
#define CABALLO_H

#include "Pieza.h"

class Caballo : public Pieza
{
	public:
		Caballo(int, int, bool,Pieza***);
		
		bool Movimiento(int,int);
		
		~Caballo();
	protected:
};

#endif
