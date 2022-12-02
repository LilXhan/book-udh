/*Que realice la tabla de multiplicar del número N. 
(del 1 al 20)*/

#include<iostream>

using namespace std;

int main(){
	int N, x = 1, Mult;
	
	cout<<"Ingrese un numero: ";
	cin>>N;
	
	do{
		Mult = x*N;
		cout<<x<<" * "<<N<<" = "<<Mult<<endl;
		x++;
	}while(x<=20);
	
	return 0;
}
