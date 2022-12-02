/*2)	Que ingrese N elementos a un arreglo unidimensional y que pida un número el cual multiplicará a cada elemento 
del arreglo y luego muestre los nuevos elementos.*/

#include<iostream>

using namespace std;

int main(){
	int N, A[100], X, i;
	
	cout<<"Cuantos datos desea ingresar: ";
	cin>>N;
	
	for(i = 0; i <= N - 1; i++){
		cout<<"Dato "<<i<<": ";
		cin>>A[i];
	}
	
	cout<<"\nIngrese un numero que multiplicara a todos los elementos del arreglo: ";
	cin>>X;
	
	cout<<"\nLos nuevos datos son."<<endl;
	for(i = 0; i <= N - 1; i++){
		cout<<"Dato "<<i<<" = "<<A[i]*X<<endl;
	}
	
	
	
	return 0;
}
