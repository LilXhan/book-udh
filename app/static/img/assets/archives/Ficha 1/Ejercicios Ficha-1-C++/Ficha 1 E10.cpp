/*Un alumno desea saber el promedio de sus calificaciones teniendo en cuenta que:

		- El promedio de sus 4 tareas académicas es el 60% del promedio final
		- El examen de medio curso es el 15% del promedio final
		- El examen final es el 25% del promedio final.
*/

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main (){
	int T1, T2, T3, T4, EMC, EFC;
	float Prom_Tareas = 0, Valor_EMC = 0, Valor_EFC = 0, Valor_TA, Prom_Final = 0;  
	
	cout<<"\tPROMEDIO DE UN ALUMNO"<<endl;
	cout<<"Nota de la tarea 1: ";
	cin>>T1;
	cout<<"Nota de la tarea 2: ";
	cin>>T2;
	cout<<"Nota de la tarea 3: ";
	cin>>T3;
	cout<<"Nota de la tarea 4: ";
	cin>>T4;
	
	Prom_Tareas = (T1+T2+T3+T4) / 4;
	
	cout<<"\nEl promedio de las tareas academicas es: "<<Prom_Tareas;
	
	cout<<"\nIngrese la nota del examen de medio curso: ";
	cin>>EMC;
	cout<<"Ingrese la nota del examen de fin de curso: ";
	cin>>EFC;
	
	Valor_TA = Prom_Tareas*0.6;
	Valor_EMC = EMC*0.15;
	Valor_EFC = EFC*0.25;
	
	Prom_Final = Valor_TA + Valor_EMC + Valor_EFC;
	
	cout<<"\nEl promedio final es: "<<Prom_Final;
	
	getch();
	return 0;
}
