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
using std::cin;
Chaturanga::Chaturanga() {
	
	cout << "pasa" << endl;
	
	
	//crear el arreglo de apuntadores
	tablero = new Pieza**[8];
	
	//instanciar los arreglos de chars
	for(int i =0; i<8;i++){
		tablero[i]=new Pieza*[8];
	} 
	
	
	for(int i = 2; i <= 6; i++) {
		for(int j = 0; j < 8; j++) {
			tablero[i][j] = nullptr;
		}
	}
	
	//NEGRAS
	tablero[0][0] = new Torre(0,0,false,tablero);
	tablero[0][7] = new Torre(0,7,false,tablero);
	
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
	
	
}

//FUNCTIONS
void Chaturanga::Juego()
{
	string leyenda;
	bool jugador=true;
	
	while(true){
		printTablero();

		if (jugador) leyenda="1 (Piezas Blancas)";
		else leyenda="2 Piezas Negras";
		bool valido=false;
		size_t f1,f2,c1,c2;
		string filas="01234567";
		string cols ="ABCDEFGH";
		while (!valido){
			string res;
			cin.clear();
			cin.ignore(100,'\n');
			cout <<"Ingrese coordenadas jugador "<<leyenda<<endl<<":";
			cin>>res;
			if (res=="salir"){
				break;
				break;
			} 
			if(res.size()>=5 && res[2]=='-'){
				f1=filas.find(res[1]);
				if (f1!=string::npos){
					c1=cols.find(res[0]);
					if(c1!=string::npos){
						f2=filas.find(res[4]);
						if(f2!=string::npos){
							c2=cols.find(res[3]);
							if (c2!=string::npos){
								cout<<"fc bien\n";
								if (tablero[f1][c1]->getBlanca()==jugador){
									cout<<"llamar mov\n";
									valido=tablero[f1][c1]->Movimiento(f2,c2);
								}
							}
						}
					}
				}
			} 
			if(!valido){
				cout<<"Ingrese un movimiento valido!!"<<endl<<endl;
			}
		}
		jugador=!jugador;
	}
	
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
