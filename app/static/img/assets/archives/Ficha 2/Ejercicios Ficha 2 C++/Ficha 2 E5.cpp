/*Leer dos valores numéricos e imprimir en orden ascendente.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	float N1, N2;
	
	cout<<"Ingrese el primer numero: ";
	cin>>N1;
	cout<<"Ingrese el segundo numero: ";
	cin>>N2;
	
	if(N1>N2){
		cout<<"\nOrdenados de manera ascendente es "<<N2<<" y "<<N1;
	}
	else{
		cout<<"\nOrdenados de manera ascendente es "<<N1<<" y "<<N2;
	}
	
	getch();
	return 0;
}
