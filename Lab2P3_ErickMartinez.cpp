#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

float Calcular_Distancia(float, float, float, float);
float Calcular_Seno();
float Calcular_Coseno();
void Calcular_Triangulo();

float Calcular_Distancia(float x1, float y1, float x2, float y2) {
	float distancia;
	float totalx = x2 - x1;
	float totaly = y2 - y1;
	totalx = totalx * totalx;
	totaly = totaly * totaly;
	distancia = totalx + totaly;
	distancia = sqrt(distancia);
	return distancia;
}

float Calcular_Seno() {
	float seno;
	return seno;
}

float Calcular_Coseno() {
	float coseno;
	return coseno;
}

void Calcular_Triangulo() {

}

int main() {
	int opcion;
	do {
		cout << endl;
		cout << "   Menu" << endl
			<< "1. Calcular Distancia" << endl
			<< "2. Calcular Seno y Coseno" << endl
			<< "3. Calcular Triangulo" << endl
			<< "4. Salir" << endl
			<< "Ingrese su opción: ";
		cin >> opcion;
		cout << endl;
		switch (opcion) {
			case 1:
				float x1, x2, y1, y2;
				cout << "-> Calcular Distancia" << endl;
				cout << "Ingrese el valor de x1: ";
				cin >> x1;
				cout << "Ingrese el valor de y1: ";
				cin >> y1;
				cout << "Ingrese el valor de x2: ";
				cin >> x2;
				cout << "Ingrese el valor de y2: ";
				cin >> y2;
				cout << "La distancia total es de: " << Calcular_Distancia(x1,y1,x2,y2) << endl;
				break;
			case 2:
				{
				int opcion2 = 0;
				do {
					cout << "-> Calcular Seno/Coseno" << endl
						<< "1. Calcular Seno" << endl
						<< "2. Calcular Coseno" << endl
						<< "Ingrese su opción: ";
					cin >> opcion2;
				} while (opcion2 != 1 && opcion2 != 2);
				if (opcion2 == 1) {
					Calcular_Seno();
				} else {
					Calcular_Coseno();
				}
				}
				break;
			case 3:
				Calcular_Triangulo();
				break;
			case 4:
				cout << "Hasta Pronto!" << endl;
				break;
		}
	} while (opcion != 4);
	return 0;
}
