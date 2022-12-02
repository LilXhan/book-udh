/*9)	Programa que permita la entrada N caracteres y luego muestre sólo las vocales.*/

#include<iostream>

using namespace std;

int main(){
	int i, N;
	char A[100];
	
	cout<<"Cuantos caracteres desea ingrear: ";
	cin>>N;
	for(i=0; i<=N-1; i++){
		cout<<"Ingrese caracter "<<i<<": ";
		cin>>A[i];
	}
	
	cout<<"\nImprimiendo las vocales.\n";
	
	for(i=0; i<=N-1; i++){
		if(A[i] == 'A' || A[i] == 'E' || A[i] == 'I' || A[i] == 'O' || A[i] == 'U' || A[i] == 'a' ||A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u'){
			cout<<"Caracter "<<i<<": "<<A[i]<<endl;
		}
	}
	
	return 0;
}
