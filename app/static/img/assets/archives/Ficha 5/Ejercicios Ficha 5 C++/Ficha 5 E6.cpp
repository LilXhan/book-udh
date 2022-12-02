/*6)	Modifique el programa 5 para que además muestre solo los pares y luego sólo los impares.*/

#include<iostream>

using namespace std;

int main(){
	int N, A[100], i, Cont_Par = 0, Cont_Impar = 0;
	
	cout<<"Cuantos datos desea ingresar: ";
	cin>>N;
	
	for(i = 0; i <= N - 1; i++){
		cout<<"Dato "<<i<<": ";
		cin>>A[i];
		
		if(A[i] % 2 == 0)
			Cont_Par ++;
		else
			Cont_Impar ++;
	} 
	
	cout<<"\nEn el arreglo hay "<<Cont_Par<<" datos pares."<<endl;
	cout<<"y "<<Cont_Impar<<" datos impares."<<endl;
	
	cout<<"\n\tLos datos pares son: "<<endl;
	for(i = 0; i <= N - 1; i++){
		if(A[i] % 2 == 0)
			cout<<"Dato "<<i<<": "<<A[i]<<endl;
	}
	
	cout<<"\n\tLos datos impares son: "<<endl;
	for(i = 0; i <= N - 1; i++){
		if(A[i] % 2 != 0)
			cout<<"Dato "<<i<<": "<<A[i]<<endl;
	}
	
	return 0;
}
