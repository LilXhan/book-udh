/*Hacer un programa que reciba datos de una persona y le dé una categoría según el siguiente criterio:
	a) Adulto profesionista, si tiene un título y trabajo y tiene entre 20 y 50 años.
	b) Adulto desempleado, si no tiene trabajo y tiene entre 20 y 50 años.
	c) Joven estudiante, si estudia y tiene entre 15 y 20 años.
	d) Joven desempleado, si no estudia y tiene entre 15 y 20 años.
	e) Joven empleado, si no tiene título y trabaja, entre 15 y 20 años de edad.
*/

#include<iostream>
using namespace std;
int main(){
	int Edad, R1, R2, R3, R4;
	
	cout<<"Ingrese edad de la persona: ";
	cin>>Edad;
	cout<<"Responda 1 para SI y 2 para NO";
	
	if(Edad > 14 and Edad < 51){
		if(Edad > 20){
			cout<<"\nTiene trabajo?: ";
			cin>>R1;
			cout<<"Tiene titulo?: ";
			cin>>R2;
				if(R1 == 1){
					if(R2 == 1)
						cout<<"\nEsta persona es un Adulto profesionalista.";
				}
				else
					cout<<"\nEsta persona es un Adulto desempleado.";
		}
		else{
			cout<<"\nEtudia?: ";
			cin>>R3;
			if(R3 == 1)
				cout<<"\nEsta persona es un joven estudiante.";
			else{
				cout<<"Trabaja?: ";
				cin>>R4;
				if(R4 == 1)
					cout<<"Esta persona es un joven empleado.";
				else
					cout<<"Esta persona es un joven desempleado.";
			}
		}			
	}
	else
		cout<<"No se encuentra en el rango de edad a acalificar";		
	
	return 0;
}
