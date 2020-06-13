#include "Ministro.h"

Ministro::Ministro(int fila, int coulumna, bool blanca, Pieza*** tablero)
{
	char caracter;
	if(blanca) {
		setCaracter('W');
	} else {
		setCaracter('M');
	}
}

bool Ministro::Movimiento(int fil, int col)
{
	
}


Ministro::~Ministro()
{
}
