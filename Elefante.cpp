#include "Elefante.h"

Elefante::Elefante(int fila, int coulumna, bool blanca, Pieza*** tablero)
{
	char caracter;
	if(blanca) {
		caracter = '3';
	} else {
		caracter = 'E';
	}
	Pieza(fila, coulumna, caracter, blanca, tablero);
}

bool Elefante::Movimiento(int fil, int col)
{
	
}

Elefante::~Elefante()
{
}
