#include "Pieza.h"
#include <iostream>
using std::cout;

//CONSTRUCTORS
Pieza::Pieza()
{
	
}

Pieza::Pieza(int fil, int column, bool blanc, Pieza*** tabler) 
{
	this->fila = fil;
	this->columna = column;
	this->blanca = blanc;
	this->caracter=' ';
}


//FUNCTIONS
char Pieza::getCaracter() {
	return caracter;
}
bool Pieza::getBlanca(){
	return blanca;
}

void Pieza::setCaracter(char caracter){
	this->caracter=caracter;
}

bool Pieza::Movimiento(int fil, int col)
{
	cout <<"movimiento base"<<"\n";
}

Pieza::~Pieza()
{
	delete tablero;
}
