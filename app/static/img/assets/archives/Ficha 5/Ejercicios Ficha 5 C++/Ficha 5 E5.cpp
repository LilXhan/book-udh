/*5)	Que permita el ingreso de N elementos enteros a un arreglo y determine cuantos son pares y cuantos son impares.*/

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
	cout<<"En el arreglo hay "<<Cont_Impar<<" datos impares."<<endl;
	
	return 0;
}
