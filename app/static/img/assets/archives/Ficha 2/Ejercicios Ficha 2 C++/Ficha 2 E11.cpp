/*Realice un algoritmo que permita el ingreso del nombre de una persona, además el año de nacimiento y el año actual, 
luego calcule la edad de la persona y emita un mensaje de acuerdo a la edad calculada. */

#include<iostream>

using namespace std;

int main(){
	char Nombre[20];
	int FA, FN, Edad = 0;	
	
	cout<<"Ingrese el nombre de la persona: ";
	cin>>Nombre;
	cout<<"Ingrese el año de nacimiento: ";
	cin>>FN;
	cout<<"Ingrese el año de actual: ";
	cin>>FA;
	
	Edad = FA - FN;
	
	if(Edad >= 0 && Edad <= 120){
		if(Edad >= 0 and Edad <= 5)
			cout<<"\n"<<Nombre<<" tiene "<<Edad<<" años y pertece a la etapa Primera Infancia";
		else{
			if(Edad > 5 and Edad <= 11)
				cout<<"\n"<<Nombre<<" tiene "<<Edad<<" años y pertece a la etapa Infancia";
			else{
				if(Edad > 11 and Edad <= 17)
					cout<<"\n"<<Nombre<<" tiene "<<Edad<<" años y pertece a la etapa Adolecencia";
				else{
					if(Edad > 17 and Edad <= 26)
						cout<<"\n"<<Nombre<<" tiene "<<Edad<<" años y pertece a la etapa Juventud";
					else{
						if(Edad > 26 and Edad <= 59)
							cout<<"\n"<<Nombre<<" tiene "<<Edad<<" años y pertece a la etapa Adultez";
						else
							cout<<"\n"<<Nombre<<" tiene "<<Edad<<" años y pertece a la etapa Persona Mayor";
					}
				}
			}
		}
	}		
	else
		cout<<"Las fechas estan mal ingresadas.";
		
	return 0;
}
