/*Que pida un número y pregunte si desea continuar si o no; en caso afirmativo que continúe pidiendo números, 
sino que se detenga e imprima la suma de todos los números ingresados. Nota el 's' o 'n' ingresados deben 
estar entre apostrofes.*/

#include<iostream>

using namespace std;

int main(){
	int Num, Suma = 0, SN;
	
	cout<<"Ingrese un numero: ";
	cin>>Num;
	
	Suma += Num;
	
	cout<<"Desea continuar s/n, 1 es si y 0 es no: ";
	cin>>SN;
	
	while(SN == 1){
		cout<<"Ingrese otro numero: ";
		cin>>Num;
		Suma += Num;
		cout<<"Desea continuar s/n, 1 es si y 0 es no: ";
		cin>>SN;
	}
	
	cout<<"\nLa suma de los numeros ingresados es: "<<Suma;
	
	return 0;
}
