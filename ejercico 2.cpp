#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
	int cantidad, max;
	srand(time(0));
	cout<<"Ingrese la cantidad de numeros aleatorios: "; cin>>cantidad;
	cout<<"Ingrese el maximo de los numeros aleatorios: "; cin>>max;
	cout<<endl;
	cout<<"NUMEROS ALEATORIOS"<<endl;
	cout<<"******************"<<endl;
	for(int i=0; i<cantidad; i++) 
	{
		cout<<rand()%max<<"\t";
	}
	return 0;
}
