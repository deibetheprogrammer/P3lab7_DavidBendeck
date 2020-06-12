#include "Caballo.h"

Caballo::Caballo(int fila, int coulumna, bool blanca, Pieza*** tablero)
{
	char caracter;
	if(blanca) {
		caracter = 'O';
	} else {
		caracter = 'C';
	}
	Pieza(fila, coulumna, caracter, blanca, tablero);
}

bool Caballo::Movimiento(int fil, int col)
{
	
}

Caballo::~Caballo()
{
}
