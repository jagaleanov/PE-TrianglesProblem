//Laboratorio triangulos
/*
Un ingeniero tiene el problema de determinar la altura (h) que se genera de la intersección de 2 varillas (A y B) de longitud conocida que caen por accidente a lo profundo de un pozo como lo indica la figura siguiente.
La base del pozo también es de Long conocida. Para solucionar el problema el ing. decide plantear un algoritmo en pseint y un programa q determine dicha altura.
El programa debe mostrar A, B, base y h.
*/
#include <iostream>
#include <math.h>

using namespace std;

float a,b,base;
double h;

double get_h(float a, float b, float base);

int main()
{
	cout<<"Ingrese el valor de las varillas 'a', 'b' y la 'base'"<<endl;
	cin>>a;
	cin>>b;
	cin>>base;
	
	if(base>=a || base>=b)
	{
		cout<<"El valor de la 'base' debe ser menor a 'a' y 'b'"<<endl;
	}
	else
	{
		cout<<"El valor de 'a' es "<<a<<endl;
		cout<<"El valor de 'b' es "<<b<<endl;
		cout<<"El valor de la 'base' es "<<base<<endl;
		cout<<"El valor de la altura de la interseccion 'h' es "<< get_h(a,b,base)<<endl;
	}
	
	
	system("pause");
	return 0;
}

double get_h(float a, float b, float base)
{
	
	return ((base * sin(acos(base/a)))*sin(acos(base/b)))/(sin(M_PI-acos(base/b)-acos(base/a)));
}


