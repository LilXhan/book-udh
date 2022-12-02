/*9)	Algoritmo que permita el ingreso de un numero natural y saber si es un numero primo o no.*/

#include<iostream>

using namespace std;

int main(){
	int i, Num, Cont_Cero = 0;
	
	cout<<"Digite un numero: ";
	cin>>Num;
	for(i = 1; i <= Num; i++){
		if(Num % i == 0)
			Cont_Cero ++; 
	}
	
	if(Cont_Cero == 2)
		cout<<"\n"<<Num<<" es un numero primo: ";
	else
		cout<<"\n"<<Num<<" no es un numero primo: ";
	
	return 0;
}
