/*Dado un número natural, determinar si es cero, par o impar.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int N;
	
	cout<<"Ingrese un numero natural: ";
	cin>>N;
	
	if(N == 0)
		cout<<"\nEl numero ingresado es cero.";
	else{
		if(N > 0){
			if(N % 2 == 0)
				cout<<"\nEl numero ingresado es par positivo.";
			else
				cout<<"\nEl numero ingresado es impar positivo.";		
		}
		else{
			if(N % 2 == 0)
				cout<<"\nEl numero ingresado es par negativo.";
			else
				cout<<"\nEl numero ingresado es impar negativo.";	
			
		}
	}
	
	getch();
	return 0;
}
