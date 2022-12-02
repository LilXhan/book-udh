/*Algoritmo que convierta grados Celsius a grados Fahrenheit.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	float C, F = 0;
	
	cout<<"Ingrese los grados celcius que desee convertir: ";
	cin>>C;
	
	F = (1.8*C) + 32;
	
	cout<<"\n"<<C<<" grados celcius son "<<F<<" grados fahrenheit";
	
	getch();
	return 0;
}
