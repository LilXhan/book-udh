/*1)	Que imprima los primeros 15 n�meros de la tabla de multiplicar del 
n�mero N. (N debe estar entre 1 y 100)*/

#include<iostream>

using namespace std;

int main(){
	int N;
	
	setlocale(LC_ALL, "spanish");
	
	do{
		cout<<"Ingrese un n�mero: ";
		cin>>N;
	}while(N < 1 || N > 100);
	
	for(int i=1; i<=15;i++){
		cout<<N<<" * "<<i<<" = "<<N*i<<endl; 
	}
	
	return 0;
}
