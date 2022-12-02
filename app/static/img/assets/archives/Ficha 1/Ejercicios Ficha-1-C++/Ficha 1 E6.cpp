/*Algoritmo que eleve al cubo un número entero.*/

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main (){
	int N, Cubo = 0;
	
	cout<<"PROGRAMA QUE ELEVA UN NUMERO ENTERO AL CUBO"<<endl;
	cout<<"Ingrese un numero entero: ";
	cin>>N;
	
	Cubo = (pow(N,3));
	
	cout<<"\nEl cubo de este numero es: "<<Cubo;
	
	getch();
	return 0;
}
