#include "Infanteria.h"
#include <iostream>
using std::cout;
using std::endl;
Infanteria::Infanteria(int fila, int coulumna, bool blanca, Pieza*** tablero)
{
	if(blanca) {
		setCaracter('L');
	} else {
		setCaracter('I');
	}
}

bool Infanteria::Movimiento(int fil, int col)
{
	cout<<"mov infanteria"<<endl;
	int dc=abs(col-columna);
	int df=abs(fil-fila);
	if(dc>1||df>1) return false;
	if (dc+df==2){
		if (tablero[fil][col]==nullptr || tablero[fil][col]->getBlanca()==blanca) return false;
		delete tablero[fil][col];
		tablero[fil][col]=tablero[fila][columna];
		tablero[fila][columna]=nullptr;
		return true;	
	}
	else{
		if(tablero[fil][col]!=nullptr) return false;
		tablero[fil][col]=tablero[fila][columna];
		tablero[fila][columna]=nullptr;
		return true;
	}
	
}

Infanteria::~Infanteria()
{
}
