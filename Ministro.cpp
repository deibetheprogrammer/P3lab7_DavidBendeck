#include "Ministro.h"

Ministro::Ministro(int fila, int coulumna, bool blanca, Pieza*** tablero)
{
	char caracter;
	if(blanca) {
		caracter = 'W';
	} else {
		caracter = 'M';
	}
	Pieza(fila, coulumna, caracter, blanca, tablero);
}

bool Ministro::Movimiento(int fil, int col)
{
	
}


Ministro::~Ministro()
{
}
