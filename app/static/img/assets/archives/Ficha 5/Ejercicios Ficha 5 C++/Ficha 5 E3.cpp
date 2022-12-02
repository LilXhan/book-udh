/*3)	Que ingrese N elementos a un arreglo unidimensional y muestre solo los elementos de los casilleros impares. 
Además, que imprima la suma de los elementos de los casilleros impares.*/

#include<iostream>

using namespace std;

int main(){
	int N, A[100], sumImpar = 0, i;
	
	cout<<"Cuantos datos desea ingresar: ";
	cin>>N;
	
	for(i = 0; i <= N - 1; i++){
		cout<<"Dato "<<i<<": ";
		cin>>A[i];
	}
	
	cout<<"\nDatos que se encuentran en casilleros impares."<<endl;
	
	for(i = 0; i <= N - 1; i++){
		if(i % 2 != 0){
			cout<<"Dato "<<i<<": "<<A[i]<<endl;
			sumImpar += A[i];
		}
	}
	
	cout<<"\nLa suma de los datos en los casilleros impares es: "<<sumImpar;
	
	return 0;
}
