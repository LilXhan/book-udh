/*4)	Que permita el ingreso de N elementos enteros a un arreglo y saque la raíz cuadrada sólo de los elementos positivos.*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int N, A[100], i;
	float Raiz_Cu;
	
	cout<<"Cuantos datos desea ingresar: ";
	cin>>N;
	
	for(i = 0; i <= N - 1; i++){
		cout<<"Dato "<<i<<": ";
		cin>>A[i];
	}
	
	cout<<"\nImprimiendo la raiz cuadrada de los elementos postivos y la posicion en la que se encuentran."<<endl;
	
	for(i = 0; i <= N - 1; i++){
		if(A[i] >= 0){
			Raiz_Cu = sqrt(A[i]);
			cout<<"Dato "<<i<<": "<<Raiz_Cu<<endl;
		}
	}

	return 0;
}
