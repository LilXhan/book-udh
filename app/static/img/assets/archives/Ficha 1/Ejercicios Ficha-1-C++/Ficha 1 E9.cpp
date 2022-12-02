/*Un docente desea saber el porcentaje de varones y mujeres que hay en un salón de clases; realice el algoritmo respectivo.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	int Num_V, Num_M, Total_A = 0, Porcentaje_V = 0, Porcentaje_M = 0;
	
	cout<<"Ingrese la cantidad de varones en el salon: ";
	cin>>Num_V;
	cout<<"Ingrese la cantidad de mujeres en el salon: ";
	cin>>Num_M;
	
	Total_A = Num_V + Num_M;
	Porcentaje_V = (Num_V*100)/Total_A;
	Porcentaje_M = (Num_M*100)/Total_A;

	cout<<"\nEl el salon hay "<<Porcentaje_V<<"% de varones y "<<Porcentaje_M<<"% de mujeres";
	
	getch();
	return 0;
}
