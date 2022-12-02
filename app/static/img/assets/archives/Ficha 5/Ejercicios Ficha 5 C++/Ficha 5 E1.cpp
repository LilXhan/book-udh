/*1)	Que ingrese N elementos a un arreglo unidimensional y muestre los elementos desde el último casillero al 
primero y además la suma de todos.*/

#include<iostream>

using namespace std;

int main(){
	int N, X[100], Suma = 0, i;
	
	cout<<"Cuantos numeros desea ingresar: ";
	cin>>N;
	
	for(i = 0; i <= N-1; i++){
		cout<<"Dato "<<i<<": ";
		cin>>X[i];
	}
	
	cout<<"\n\n";
	
	for(i = N - 1; i >= 0; i--){
		cout<<"Casillero "<<i<<": "<<X[i]<<endl;
		Suma += X[i];
	}
	
	cout<<"\n\nLa suma de los numeros ingresados es: "<<Suma;
	
	
	return 0;
}
