#ifndef PIEZA_H
#define PIEZA_H
#include <string>

using std::string;

class Pieza
{
	public:
		//CONSTRUCTORS
		Pieza();
		
		Pieza(int, int, char, bool,Pieza ***);
		
		//FUNCTIONS
		char getCaracter();
		virtual bool Movimiento(int, int);
		
		~Pieza();
	//protected:
		
		Pieza*** tablero;
		int fila;
		int columna;
		char caracter;
		bool blanca;
		
};

#endif
