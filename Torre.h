#ifndef TORRE_H
#define TORRE_H

#include "Pieza.h"

class Torre : public Pieza
{
	public:
		Torre(int, int, bool,Pieza***);
		
		bool Movimiento(int,int);
		
		~Torre();
	protected:
};

#endif
