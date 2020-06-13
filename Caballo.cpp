#include "Caballo.h"

Caballo::Caballo(int fila, int coulumna, bool blanca, Pieza*** tablero)
{
	if(blanca) {
		setCaracter('O');
	} else {
		setCaracter('C');
	}

}

bool Caballo::Movimiento(int fil, int col)
{
	
}

Caballo::~Caballo()
{
}
