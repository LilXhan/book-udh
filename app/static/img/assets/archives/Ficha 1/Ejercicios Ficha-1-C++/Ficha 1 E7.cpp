/*Algoritmo que calcule la distancia (MRU) sabiendo la velocidad y el tiempo recorrido por un móvil.*/

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main (){
	float V, T, D = 0;
	
	cout<<"\tPROGRAMA QUE CALCULA LA DISTANCIA MRU"<<endl;
	cout<<"Ingrese la velocidad: ";
	cin>>V;
	cout<<"Ingrese el tiempo: ";
	cin>>T;
	
	D = V*T;
	
	cout<<"\nLa distancia MRU es: "<<D;
	
	getch();
	return 0;
}
