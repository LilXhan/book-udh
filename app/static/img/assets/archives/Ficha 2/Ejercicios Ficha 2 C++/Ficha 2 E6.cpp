/*Leer la edad de una persona y escriba el mensaje respectivo si es mayor o menor de edad.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int Edad;
	
	cout<<"Ingresa la edad de la persona: ";
	cin>>Edad;
	
	if(Edad >= 0 and Edad <= 120){
		if(Edad >= 18)
			cout<<"\nLa persona es mayor de edad";
		else
			cout<<"\nLa persona es menor de edad";
	}
	else
		cout<<"\nEsta persona aun no nace o ya murio :)";
	
	getch();
	return 0;
}
