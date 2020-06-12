#include "Infanteria.h"

Infanteria::Infanteria(int fila, int coulumna, bool blanca, Pieza*** tablero)
{
	char caracter;
	if(blanca) {
		caracter = 'L';
	} else {
		caracter = 'I';
	}
	Pieza(fila, coulumna, caracter, blanca, tablero);
}

bool Infanteria::Movimiento(int fil, int col)
{
	
}

Infanteria::~Infanteria()
{
}
