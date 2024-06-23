#include<bits/stdc++.h>

using namespace std;

double calcular_raices_x1(int a, int b, int c)
{
	double discriminante=(b*b)-(4*a*c);
	if(discriminante>=0)
	{
		double x1=(-b+sqrt(discriminante))/(2*a);
		return x1;
	}
	return 3;
	
}
double calcular_raices_x2(int a, int b, int c)
{
	double discriminante=(b*b)-(4*a*c);
	if(discriminante>=0)
	{
		double x2=(-b-sqrt(discriminante))/(2*a);
		return x2;
	}
}

int main()
{
	int a, b, c;
	double x1, x2;
	cout<<"Ingrese el valor de a: "; cin>>a;
	cout<<"Ingrese el valor de b: "; cin>>b;
	cout<<"Ingrese el valor de c: "; cin>>c;
	if(calcular_raices_x1(a, b, c)==3)
	{
		double parte_real=-b/(2*a);
		double parte_imaginaria=sqrt(-1*((b*b)-(4*a*c)))/(2*a);
		cout<<"x1: " <<parte_real<<" + " <<parte_imaginaria<<" i "<<endl;
		cout<<"x2: " <<parte_real<<" - " <<parte_imaginaria<<" i "<<endl;
		return 1;
	}
	x1=calcular_raices_x1(a, b, c);
	x2=calcular_raices_x2(a, b, c);
	cout<<"x1: " <<x1<<endl;
	cout<<"x2: " <<x2<<endl;
	return 0;

}
