#include "Raja.h"

Raja::Raja(int fila, int coulumna, bool blanca, Pieza*** tablero)
{
	if(blanca) {
		setCaracter('P');
	} else {
		setCaracter('R');
	}
}

bool Raja::Movimiento(int fil, int col)
{
	
}


Raja::~Raja()
{
}
