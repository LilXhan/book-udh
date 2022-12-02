/*Modifique el algoritmo anterior para que al final también imprima la cantidad de datos ingresados y el promedio de los datos.*/

#include<iostream>

using namespace std;

int main(){
	float Num, Suma = 0, cont = 0, Promedio = 0;
	char SN;
	
	cout<<"Ingrese un numero: ";
	cin>>Num;
	
	Suma += Num;
	cont ++;
	
	cout<<"Desea continuar s/n: ";
	cin>>SN;
	while(SN == 's' || SN == 'S'){
		cout<<"Ingrese otro numero: ";
		cin>>Num;
		Suma += Num;
		cont ++;
		cout<<"Desea continuar s/n: ";
		cin>>SN;
	}
	
	Promedio = Suma/cont;
	
	cout<<"\n\nLa suma de los numeros ingresados es: "<<Suma;
	cout<<"\nLa cantidad de numeros ingresados es: "<<cont;
	cout<<"\nEl promedio es: "<<Promedio;	
		
	return 0;
}
