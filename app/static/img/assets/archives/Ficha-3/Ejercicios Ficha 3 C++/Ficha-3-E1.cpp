/*Ingresar una nota del 1 al 20 y saber si está aprobado o desaprobado.*/

#include<iostream>

using namespace std;

int main(){
	float Nota;
	
	cout<<"Ingrese una nota: ";
	cin>>Nota;
	while(Nota < 0 || Nota > 20){
		cout<<"La nota ingresada es incorrecta.\n\n";
		cout<<"Ingrese una nota nuevamente: ";
		cin>>Nota;
	}
	
	if(Nota > 10.5)
		cout<<"Usted aprobo.";
	else
		cout<<"Usted desaprobo.";
	
	return 0;
}
