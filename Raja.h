#ifndef RAJA_H
#define RAJA_H

#include "Pieza.h"

class Raja : public Pieza
{
	public:
		
		Raja(int, int, bool,Pieza***);
		
		bool Movimiento(int,int);
		
		~Raja();
	protected:
		
};

#endif
