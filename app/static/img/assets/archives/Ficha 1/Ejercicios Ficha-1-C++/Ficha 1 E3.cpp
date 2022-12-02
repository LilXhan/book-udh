/*Algoritmo que convierta kilómetros en metros y en centímetros.*/

#include<iostream>

using namespace std;

int main(){
	float K;
	int M = 0, C = 0;
	
	cout<<"Ingrese cauntos kilometros desea convertir a metros y centimetros: ";
	cin>>K;
	
	M = K * 1000;
	C = M * 100;
	
	cout<<K <<" kilometros equivale a " <<M <<" metros y " <<C <<" centimetros";
	
	return 0;
}
