#include <iostream>
#include <cmath>
using namespace std;

double calcular_Area(double radio)
{
	
	double pi = M_PI;
	return pi * pow(radio, 2);
}

int main() {
	
	double radio, resultado;
	cout<<"Ingrese el radio: "; cin>>radio;
	resultado = calcular_Area(radio);
	cout<<"El radio es: "<<resultado;
	return 0;
}
