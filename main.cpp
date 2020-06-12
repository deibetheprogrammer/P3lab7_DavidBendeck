#include <iostream>
#include "Chaturanga.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv) {
	
	
	while(true) {
		
		cout << "Desea jugar ? : " << endl
			 << "1) Si" << endl
			 << "2) No, salir" << endl
			 << "Su eleccion: ";
		
		int opcion;
		cin >> opcion;
		
		while (!cin || (opcion < 1 || opcion >2)) {
			cin.clear();
			cin.ignore(100,'\n');
			cout << "Ingrese una opcion valida: ";
			cin >> opcion;
		}
		
		if (opcion == 1) {
			
			Chaturanga* chaturanga = new Chaturanga();
			chaturanga->Juego();
			
		} else {
			cout << "Saliendo...";
			break;
		}
	}
	
}
