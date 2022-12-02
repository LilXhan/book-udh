/*Algoritmo que calcule el nuevo salario de un obrero, si obtuvo un incremento del 25% sobre su salario anterior.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int Salario, S_Nuevo = 0;
	
	cout<<"Ingrese el salario del trabajador: "; 
	cin>>Salario;
	
	S_Nuevo = Salario + (Salario*0.25);
	
	cout<<"\nEl salario nuevo del trabajador es: "<<S_Nuevo;
	
	getch();
	return 0;
}
