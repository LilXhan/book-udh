/*8.	Construir un programa que calcule el índice de masa corporal de una persona (IMC = peso [kg] /altura2 [m]) e indique el estado en el que se 
encuentra esa persona en función del valor de IMC:

	Valor de IMC < 16 criterio de ingreso al hospital
	de 16 a 17 infrapeso
	de 17 a 18 bajo peso
	de 18 a 25 peso normal (saludable)
	de 25 a 30 sobrepeso (obesidad de grado i)
	de 30 a 35 sobrepeso crónico (obesidad de grado ii)
	de 35 a 40 obesidad premórbida (obesidad de grado iii)
	>40 obesidad mórbida (obesidad de grado iv)
	
Nota 1: se recomienda el empleo de sentencias if-else anidadas. Nota 2: Los operandos (peso y altura) deben ser introducidos por teclado por el usuario.
*/

#include<iostream>
#include<math.h>
#include<iomanip>
#include<conio.h>

using namespace std;

int main(){
	float Peso, Altura, IMC = 0;
	
	cout<<"Ingrese el peso de la persona: ";
	cin>>Peso;
	cout<<"Ingrese la altura de la persona: ";
	cin>>Altura;
	
	IMC = Peso / (pow(Altura, 2));
	cout<<setiosflags(ios::fixed)<<setprecision(1);
	
	if(IMC < 16)
		cout<<"Su IMC es "<<IMC<<" y esta en Criterio de ingreso al hospital.";
	else{
		if(IMC > 16 and IMC <= 17)
			cout<<"Su IMC es "<<IMC<<" y esta en el rango de Infrapeso.";
		else{
			if(IMC > 17 and IMC <= 18)
			cout<<"Su IMC es "<<IMC<<" y esta en el rango de Bajo peso.";
			else{
				if(IMC > 18 and IMC <= 25)
					cout<<"Su IMC es "<<IMC<<" y esta en el rango de Peso normal (saludable).";
				else{
					if(IMC > 25 and IMC <= 30)
						cout<<"Su IMC es "<<IMC<<" y esta en el rango de Sobrepeso (obesidad de grado i).";
					else{
						if(IMC > 30 and IMC <= 35)
							cout<<"Su IMC es "<<IMC<<" y esta en el rango de Sobrepeso cronico (obesidad de grado ii).";
						else{
							if(IMC > 35 and IMC <= 40)
								cout<<"Su IMC es "<<IMC<<" y esta en el rango de Obesidad premorbida (obesidad de grado iii).";
							else
								cout<<"Su IMC es "<<IMC<<" y esta en el rango de Obesidad morbida (obesidad de grado iv).";
						}
					}
				}
			}
		}
	}
	
	getch();
	return 0;
}
