#ifndef CHATURANGA_H
#define CHATURANGA_H
#include "Pieza.h"

class Chaturanga
{
	public:
		Chaturanga();
		
		//FUNCTIONS
		void Juego();
		void printTablero();
		
		~Chaturanga();
	protected:
		
		Pieza* tablero2[8][8];
		Pieza*** tablero;
		
};

#endif
