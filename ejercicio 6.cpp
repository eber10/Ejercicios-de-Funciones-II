#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
	int selecciona, num;
	srand(time(0));
	cout<<"Piedra = 1"<<endl;
	cout<<"Papel  = 2 "<<endl;
	cout<<"Tijera = 3 "<<endl;
    cout<<"Selecciona una opcion: "; cin>>selecciona;
    cout<<"************************"<<endl;
	num=(rand()%2)+1;
	if(selecciona==1)
	{
		cout<<"piedra";
	}
	else
	{
		if(selecciona==2)
		{
			cout<<"Papel";
		}
		else
		{
			cout<<"Tijera";
		}
	}
	cout<<" VS ";
	if(num==1)
	{
		cout<<"piedra";
	}
	else
	{
		if(num==2)
		{
			cout<<"Papel";
		}
		else
		{
			cout<<"Tijera";
		}
	}
	cout<<endl;
    if(selecciona==2 and num==1)
    {
	    cout<<"Ganaste";
    }
    else
    {
	    if(selecciona==3 and num==2)
	    {
		    cout<<"Ganaste";
	    }
	    else
	    {
		    if(selecciona==1 and num==3)
		    {
			    cout<<"Ganaste";
		    }
		    else
		    {
			    if(selecciona==num)
			    {
				    cout<<"Empate";
			    }
			    else
			    {
				    cout<<"Perdiste";
			    }
		    }
	    }
    }
	
	return 0;
}



