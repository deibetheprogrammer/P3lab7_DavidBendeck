#include "Torre.h"
#include <iostream>

using std::cout;

Torre::Torre(int fila, int coulumna, bool blanca, Pieza*** tablero)
{
	char car;
	if(blanca) {
		car = 'Y';
	} else {
		car = 'T';
	}
	Pieza(fila, coulumna, car, blanca, tablero);
	cout << "Dentro de Torre " << caracter << " funcion: " << getCaracter() << "\n"; 
}

bool Torre::Movimiento(int fil, int col)
{
	
}


Torre::~Torre()
{
}
