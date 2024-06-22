#include <iostream>
#include <cmath>
 
using namespace std;

float calcular_hipotenusa(float c1, float c2)
{
	float hipotenusa;
	return hipotenusa=sqrt(pow(c1,2)+pow(c2,2));
}
 
int main()
{
  float c1, c2, hipotenusa;
 
  cout<<"Ingrese el cateto 1: "; cin>>c1;
  cout<<"Ingrese el cateto 2: "; cin>>c2;
  hipotenusa=calcular_hipotenusa(c1, c2);
  cout<<"La hipotenusa es: " <<hipotenusa<<endl;
  return 0;
}
