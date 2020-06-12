#include "Raja.h"

Raja::Raja(int fila, int coulumna, bool blanca, Pieza*** tablero)
{
	char car;
	if(blanca) {
		car = 'P';
	} else {
		car = 'R';
	}
	Pieza(fila, coulumna, car, blanca, tablero);
}

bool Raja::Movimiento(int fil, int col)
{
	
}


Raja::~Raja()
{
}
