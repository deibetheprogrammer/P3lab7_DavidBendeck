#include "Torre.h"
#include <iostream>

using std::cout;

Torre::Torre(int fil, int column, bool blanc, Pieza*** tabler)
{

	if(blanc) {
		setCaracter('Y');
	} else {
		setCaracter('T');
	}
}

bool Torre::Movimiento(int fil, int col)
{

	cout << "mov torre" << "\n";
	
	if (fil == fila || col == columna) {
		if (tablero[fil][col]->getBlanca() == blanca) return false;
		if(tablero[fil][col] != nullptr) delete tablero[fil][col];
		tablero[fil][col] = tablero[fila][columna];
		tablero[fila][columna] = nullptr;
		return true;
		
	} else {
		return false;
	}
	
	
}


Torre::~Torre()
{
}
