/*Que pida la cantidad de n�meros a ingresar e imprima la suma de s�lo los n�meros pares ingresados.*/

#include<iostream>

using namespace std;

int main(){
	int N, Num, SumaPar, Cantidad = 1;
	
	cout<<"Cuantos numeros desea ingresar: ";
	cin>>N;
	
	while(Cantidad > 0 && Cantidad <= N){
		cout<<"Digite numero: ";
		cin>>Num;
		if(Num % 2 == 0)
			SumaPar += Num;
		Cantidad++;
	}
	
	cout<<"\nLa suma es: "<<SumaPar;
	
	return 0;
}
