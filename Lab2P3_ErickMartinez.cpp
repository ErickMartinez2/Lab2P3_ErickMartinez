#include <iostream>
using namespace std;

void Calcular_Distancia();
void Calcular_SenoCoseno();
void Calcular_Triangulo();

void Calcular_Distancia() {

}

void Calcular_SenoCoseno() {

}

void Calcular_Triangulo() {

}

int main() {
	int opcion;
	do {
		cout << "   Menu" << endl
			 << "1. Calcular Distancia" << endl
			 << "2. Calcular Seno y Coseno" << endl
			 << "3. Calcular Triangulo" << endl
			 << "4. Salir" << endl
			 << "Ingrese la opción: ";
		cin >> opcion;
		switch (opcion) {
			case 1:
				
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				cout << "Hasta Pronto!" << endl;
				break;
		}
	} while (opcion != 4);
	return 0;
}
