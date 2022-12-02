/*Algoritmo que convierta horas en minutos y en segundos.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main (){
	float H, M = 0, S = 0;
	
	cout<<"Ingrese la cantidad de horas a convertir: ";
	cin>>H;
	
	M = H * 60;
	S = M * 60;
	
	cout<<"\n"<<H <<" horas son " <<M <<" minutos y " <<S <<" segundos";
	
	getch();
	return 0;
}
