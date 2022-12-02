/*Algoritmo que convierte soles a dólares.*/

#include<iostream>

using namespace std;

int main (){
	float P_Dolar, C_Soles, Conversion = 0;
	
	cout<<"\tPROGRAMA QUE CONVIERTE SOLES A DOLARES"<<endl;
	cout<<"Ingrese el precio actual del dolar: ";
	cin>>P_Dolar;
	cout<<"Cuantos soles desea convertir a dolares?"<<endl;
	cin>>C_Soles;
	
	Conversion = C_Soles / P_Dolar;
	
	cout<<"\nLa conversion es: "<<Conversion<<" dolares"; 
	
	return 0;
}
