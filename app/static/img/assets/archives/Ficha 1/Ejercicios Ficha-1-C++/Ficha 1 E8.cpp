/*Algoritmo que calcule el salario mensual, sabiendo el número de horas trabajadas y el valor por hora.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	float H, V, SM = 0;
	
	cout<<"Ingrese las horas trabajadas: ";
	cin>>H;
	cout<<"Ingrese el valor por hora trabajada: ";
	cin>>V;
	
	SM = H*V;
	
	cout<<"\nEl salario mensual es: "<<SM;
	
	getch();
	return 0;
}
