#include "Elefante.h"

Elefante::Elefante(int fila, int coulumna, bool blanca, Pieza*** tablero)
{
	if(blanca) {
		setCaracter('3');
	} else {
		setCaracter('E');
	}
}

bool Elefante::Movimiento(int fil, int col)
{
	
}

Elefante::~Elefante()
{
}
