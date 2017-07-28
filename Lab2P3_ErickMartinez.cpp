#include <iostream>
#include <math.h>
#include <stdio.h>
#define pi 3.141592654
using namespace std;

float Calcular_Distancia(float, float, float, float);
double Calcular_Seno(double);
double Calcular_Coseno(double);
double Calcular_AnguloB(double, double, double);
double Coversion(double);
double Conversion2(double);
double Calcular_LadoC(double, double, double);
double Calcular_Area(double, double, double);
double Factorial(double);

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

double Calcular_Seno(double  radian) {
	double seno = 0, numerador, denominador = 1, multiplicador, factorial;
	for (double i = 0; i < 25; i++) {
		numerador = pow (-1, i);
		factorial = (2 * i) + 1;
		denominador = Factorial(factorial);
		multiplicador = pow (radian, (2 * i) + 1);
		seno += (numerador / denominador) * multiplicador;
	}
	return seno;
}

double Factorial(double factorial) {
	if (factorial == 0) {
		return 1;
	} else {
		return factorial * Factorial(factorial - 1);
	}
}

double Calcular_Coseno(double radian) {
	double coseno = 0, numerador, denominador = 1, multiplicador, factorial;
	for (double i = 0; i < 12; i++) {
		numerador = pow (-1, i);
		factorial = 2 * i;
		denominador = Factorial(factorial);
		multiplicador = pow (radian, 2 * i);
		coseno += (numerador / denominador) * multiplicador;
	}	
	return coseno;
}

double Calcular_AnguloB(double lado_b, double seno_a, double lado_a) {
	double angulo_b;
	angulo_b = asin((lado_b * seno_a) / lado_a);
	angulo_b = Conversion2(angulo_b);
	return angulo_b;
}

double Calcular_LadoC(double seno_c, double lado_a, double seno_a) {
	double lado_c;
	lado_c = (seno_c * lado_a) / seno_a;
	return lado_c;
}

double Calcular_Altura(double principal, double lado_a, double lado_b, double lado_c) {
	double altura, semiperimetro;
	semiperimetro = (lado_a + lado_b + lado_c) / 2;
	altura = (2 / principal) * sqrt (semiperimetro * (semiperimetro - lado_a) * (semiperimetro - lado_b) * (semiperimetro - lado_c));
	return altura;
}

double Calcular_Area(double lado_a, double lado_b, double lado_c) {
	double semiperimetro, area;
	semiperimetro = (lado_a + lado_b + lado_c) / 2;
	area = sqrt (semiperimetro * (semiperimetro - lado_a) * (semiperimetro - lado_b) * (semiperimetro - lado_c));
	return area;
}

double Conversion(double angulo) {
	double radian;
	radian = angulo * (pi / 180);
	return radian;
}

double Conversion2(double radian) {
	double angulo;
	angulo = radian * (180 / pi);
	return angulo;
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
		switch (opcion) {
			case 1:
				cout << endl;
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
						cout << endl;
						cout << "-> Calcular Seno/Coseno" << endl
							<< "1. Calcular Seno" << endl
							<< "2. Calcular Coseno" << endl
							<< "Ingrese su opción: ";
						cin >> opcion2;
						if (opcion2 != 1 && opcion2 != 2) {
							cout << "Opcion Incorrecta!" << endl;
						}
					} while (opcion2 != 1 && opcion2 != 2);
					cout << endl;
					if (opcion2 == 1) {
						double angulo, radian;
						cout << "-> Calcular Seno" << endl;
						cout << "Ingrese el angulo en grados: ";
						cin >> angulo;
						radian = Conversion(angulo);
						cout << "El resutado de seno es: " << Calcular_Seno(radian) << endl;
					} else {
						double angulo2, radian2;
						cout << "-> Calcular Coseno" << endl;
						cout << "Ingrese el angulo en grados: ";
						cin >> angulo2;
						radian2 = Conversion(angulo2);
						cout << "El resutado de coseno es: " << Calcular_Coseno(radian2) << endl;
					}
				}
				break;
			case 3:
				cout << endl;
				double lado_a, lado_b, lado_c, angulo_a, angulo_b, angulo_c, radian_a, radian_b, radian_c, seno_a, seno_b, seno_c, area, altura_a, altura_b, altura_c;
				cout << "-> Calcular Triangulo" << endl;
				cout << "Ingrese el valor del lado a: ";
				cin >> lado_a;
				cout << "Ingrese el valor del lado b: ";
				cin >> lado_b;
				cout << "Ingrese el valor del angulo a: ";
				cin >> angulo_a;
				radian_a = Conversion(angulo_a);
				seno_a = Calcular_Seno(radian_a);
				angulo_b = Calcular_AnguloB(lado_b, seno_a, lado_a);
				angulo_c = 180 - (angulo_a + angulo_b);
				radian_c = Conversion(angulo_c);
				seno_c = Calcular_Seno(radian_c);
				lado_c = Calcular_LadoC(seno_c, lado_a, seno_a);
				area = Calcular_Area(lado_a, lado_b, lado_c);
				altura_a = Calcular_Altura(lado_a, lado_a, lado_b, lado_c);
				altura_b = Calcular_Altura(lado_b, lado_a, lado_b, lado_c);
				altura_c = Calcular_Altura(lado_c, lado_a, lado_b, lado_c);
				cout << endl;
				cout << "-> Informacion del Triangulo" << endl
					<< "El lado a es: " << lado_a << endl
					<< "El lado b es: " << lado_b << endl
					<< "El lado c es: " << lado_c << endl
					<< "El angulo a es: " << angulo_a << endl
					<< "El angulo b es: " << angulo_b << endl
					<< "El angulo c es: " << angulo_c << endl
					<< "El area toal es: " << area << endl
					<< "La altura a es: " << altura_a << endl
					<< "La altura b es: " << altura_b << endl
					<< "La altura c es: " << altura_c << endl;
				break;
			case 4:
				cout << "Hasta Pronto!" << endl;
				break;
			default:
				cout << "Opcion Incorrecta!" << endl;
				break;
		}
	} while (opcion != 4);
	return 0;
}
