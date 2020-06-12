#include "Pieza.h"

//CONSTRUCTORS
Pieza::Pieza()
{
	
}

Pieza::Pieza(int fil, int column, char caracte, bool blanc, Pieza*** tabler) 
{
	this->fila = fil;
	this->columna = column;
	this->caracter = caracte;
	this->blanca = blanc;
	this->tablero = tabler;
}


//FUNCTIONS
char Pieza::getCaracter() {
	return caracter;
}

bool Pieza::Movimiento(int fil, int col)
{
	
}

Pieza::~Pieza()
{
	delete tablero;
}
