/*Determinar si un numero entero es divisible entre otro.*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int N1, N2;
	
	cout<<"Ingrese el dividendo: ";
	cin>>N1;
	cout<<"Ingrese el divisor: ";
	cin>>N2;
	
	if(N1%N2 == 0){
		cout<<N1 <<" es divisible entre "<<N2;
	}
	else{
		cout<<N1 <<" no es divisible entre "<<N2;
	}
	
	getch();
	return 0;
}
