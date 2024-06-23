#include<bits/stdc++.h>
using namespace std;

void calcularRaices(double a, double b, double c, double& x1, double& x2, bool& sonReales) 
{
  double discriminante = b * b - 4.0 * a * c;

  if (discriminante >= 0) 
  {
    sonReales = true;
    x1 = (-b + sqrt(discriminante)) / (2.0 * a);
    x2 = (-b - sqrt(discriminante)) / (2.0 * a);
  } 
  else 
  {
    sonReales = false;
  }
}

int main() 
{
	
  double a, b, c, x1, x2;
  cout<<"Ingrese a: "; cin>>a;
  cout<<"Ingrese b: "; cin>>b;
  cout<<"Ingrese c: "; cin>>c;
  bool sonReales;

  calcularRaices(a, b, c, x1, x2, sonReales);

  if (sonReales) 
  {
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
  } 
  else 
  {
    cout << "Raices complejas" << endl;
  }

  return 0;
}
