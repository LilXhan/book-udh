/*10)	 Que multiplique dos números, pero sin usar */

#include<iostream>

using namespace std;

int main(){
	int i, N1, N2, Producto = 0;
	
	cout<<"Ingrese el primer numero: ";
	cin>>N1;
	cout<<"Ingrese el segundo numero: ";
	cin>>N2;
	
	for(i = 1; i<=N2; i++){
		Producto += N1;
	}
	
	cout<<"\nEl resultado de la multiplicacion es: "<<Producto;
	
	return 0;
}
