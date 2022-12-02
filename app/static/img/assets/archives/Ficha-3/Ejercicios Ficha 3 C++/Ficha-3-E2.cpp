/*Que permita el ingreso del nombre de un alumno y tres notas, imprimir su promedio y si está o no aprobado. 
Tener en cuenta que las notas deben estar en el rango de 0 a 20 solamente sino debe volver a pedir.*/

#include<iostream>

using namespace std;

int main(){
	float N1, N2, N3, Promedio = 0;	
	char Nombre[20];
	
	cout<<"Cual es tu nombre: ";
	cin.getline(Nombre, 20, '\n');
	
	do{
		cout<<"Ingresa la primera nota: ";
		cin>>N1;
	}while(N1 < 0 || N1 > 20);
	
	do{
		cout<<"Ingresa la segunda nota: ";
		cin>>N2;
	}while(N2 < 0 || N2 > 20);
	
	do{
		cout<<"Ingresa la tercera nota: ";
		cin>>N3;
	}while(N3 < 0 || N3 > 20);
	
	Promedio = (N1 + N2 + N3)/3;
	
	if(Promedio > 10.5)
		cout<<"\n"<<Nombre<<" su promedio es: "<<Promedio<<" y esta aprobado."<<endl;
	else
		cout<<Nombre<<" su promedio es: "<<Promedio<<" y esta desaprobado.";
	
	return 0;
}
