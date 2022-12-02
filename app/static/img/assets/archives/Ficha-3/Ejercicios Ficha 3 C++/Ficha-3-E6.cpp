/*Que imprima del N2 al N1 usando el bucle while o MQ 
(Mientras Que). Donde N2>N1*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

int main(){
	int Ri, Rf, x;
	
	setlocale(LC_ALL, "spanish");
	
	cout<<"Ingrese rango finalñ: ";cin>>Rf;
	cout<<"Ingrese rango inicial: ";cin>>Ri;
	while(Rf==Ri || Rf<Ri){
		system("cls");
		cout<<"Ingrese rango final: ";cin>>Rf;
		cout<<"Ingrese rango inicial: ";cin>>Ri;
	}
	
	x = Rf;
	
	while(x>=Ri){
		cout<<x<<endl;
		x--;
		getch();
	}
	
	cout<<"\nUltimo valor de x: "<<x;
	
	return 0;
}
