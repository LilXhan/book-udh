/*Algoritmo que permita el ingreso de dos números enteros y calcule la división de ambos números.*/

#include<iostream>

using namespace std;

int main (){
	int A, B; 
	float Division = 0;
	
	cout<<"\tPROGRAMA QUE DIVIDE DOS NUMEROS"<<endl;
	cout<<"Ingrese el numerador: ";
	cin>>A;
	cout<<"Ingrese el denominador: ";
	cin>>B;
	
	Division = A/B;
	
	cout<<"\nLa division es: "<<Division;
	
	return 0;
}
