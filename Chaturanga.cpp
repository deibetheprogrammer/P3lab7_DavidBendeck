#include <iostream>
#include "Chaturanga.h"
#include "Raja.h"
#include "Ministro.h"
#include "Elefante.h"
#include "Caballo.h"
#include "Torre.h"
#include "Infanteria.h"

using std::cout;
using std::endl;

Chaturanga::Chaturanga() {
	
	cout << "pasa" << endl;
	
	//tablero = (Pieza***)tablero2;
	
	Pieza*** matriz=NULL;
	
	//crear el arreglo de apuntadores
	matriz = new Pieza**[8];
	
	//instanciar los arreglos de chars
	for(int i =0; i<8;i++){
		matriz[i]=new Pieza*[8];
	} 
	
	tablero = matriz;
	
	for(int i = 2; i <= 6; i++) {
		for(int j = 0; j < 8; j++) {
			tablero[i][j] = nullptr;
		}
	}
	
	cout << "aqui" << endl;
	
	//NEGRAS
	tablero[0][0] = new Torre(0,0,false,tablero);
	tablero[0][7] = new Torre(0,7,false,tablero);
	
//	cout << "caracter " << tablero[0][0]->getCaracter() << endl;

	Pieza* prueba = new Torre(0,0,false,tablero);
	
	cout << "caracter " << prueba->getCaracter() << endl;
	
	tablero[0][1] = new Caballo(0,1,false,tablero);
	tablero[0][6] = new Caballo(0,6,false,tablero);
	
	tablero[0][2] = new Elefante(0,2,false,tablero);
	tablero[0][5] = new Elefante(0,5,false,tablero);
	
	tablero[0][3] = new Raja(0,3,false,tablero);
	tablero[0][4] = new Ministro(0,4,false,tablero);
	
	for(int i = 0; i < 8 ; i++) {
		tablero[1][i] = new Infanteria(1,i,false,tablero);
	}
	
	//BLANCAS
	tablero[7][0] = new Torre(7,0,true,tablero);
	tablero[7][7] = new Torre(7,7,true,tablero);
	
	tablero[7][1] = new Caballo(7,1,true,tablero);
	tablero[7][6] = new Caballo(7,6,true,tablero);
	
	tablero[7][2] = new Elefante(7,2,true,tablero);
	tablero[7][5] = new Elefante(7,5,true,tablero);
	
	tablero[7][4] = new Raja(7,4,true,tablero);
	tablero[7][3] = new Ministro(7,3,true,tablero);
	
	for(int i = 0; i < 8 ; i++) {
		tablero[6][i] = new Infanteria(6,i,true,tablero);
	}
	
	cout << "pasa2" << endl;
	
}

//FUNCTIONS
void Chaturanga::Juego()
{
	cout << "pasa3" << endl;
	printTablero();
	cout << "pasa4" << endl;
}

void Chaturanga::printTablero() {
	
	cout << "  A B C D E F G H" << endl;
	
	for (int i = 0; i < 8; i++) {
		cout << i;
		for(int j = 0; j < 8; j++) {
			cout << " ";
			if (tablero[i][j] != nullptr) {
				cout << tablero[i][j]->getCaracter();
			} else {
				cout << '.';
			}
		}
		cout << endl;
	}
}

Chaturanga::~Chaturanga()
{
	
}
