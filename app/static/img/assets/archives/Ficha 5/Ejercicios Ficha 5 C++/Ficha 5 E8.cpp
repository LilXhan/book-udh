/*8)	Programa para determinar la unión de dos arreglos en otro arreglo.*/

#include<iostream>

using namespace std;

int main(){
	int i, NA, NB, NC = 0, A[100], B[100], C[100], z = 0;
	
	cout<<"Cuantos datos desea ingresar al primer arreglo: ";
	cin>>NA;
	
	for(i = 0; i <= NA - 1; i++){
		cout<<"Primer arreglo: Dato "<<i<<": ";
		cin>>A[i];
	}
	
	cout<<"\nCuantos datos desea ingresar al primer arreglo: ";
	cin>>NB;
	
	for(i = 0; i <= NB - 1; i++){
		cout<<"Segundo arreglo: Dato "<<i<<": ";
		cin>>B[i];
	}
	
	for(i = 0; i <= NA - 1; i++){
		C[i] = A[i];
	}
	
	NC = NA+NB;
	
	for(i = NA; i <= NC - 1; i++){
		C[i] = B[z];
		z++;
	}
	
	cout<<"\n\nUnion de los arreglos"<<endl;
	
	for(i = 0; i <= NC - 1; i++){
		cout<<"Union Dato "<<i<<": "<<C[i]<<endl;
	}

	return 0;
}
