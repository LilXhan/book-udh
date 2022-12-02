/*Dado un número entero, determinar si es positivo, negativo o cero.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int N;
	
	cout<<"Ingrese un numero entero: ";
	cin>>N;
	
	if(N == 0)
		cout<<"\nEl numero ingresado es cero.";
	else{
		if(N < 0)
			cout<<"\nEl numero ingresado es negativo.";		
		else
			cout<<"\nEl numero ingresado es positivo.";
	}
		
	getch();
	return 0;
}
