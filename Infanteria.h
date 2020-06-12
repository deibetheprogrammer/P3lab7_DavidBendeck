#ifndef INFANTERIA_H
#define INFANTERIA_H

#include "Pieza.h"

class Infanteria : public Pieza
{
	public:
		Infanteria(int, int, bool,Pieza***);
		
		bool Movimiento(int,int);
		
		~Infanteria();
	protected:
};

#endif
