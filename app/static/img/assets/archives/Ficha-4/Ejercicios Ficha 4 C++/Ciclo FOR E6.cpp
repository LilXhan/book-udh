/*6)	Que imprima la suma de los N primeros elementos de la serie: 3 6 9 …*/

#include<iostream>

using namespace std;

int main(){
	int N, Suma = 0, Num = 0;
	
	cout<<"Ingrese limite: ";
	cin>>N;
	
	for(int i=1;i<=N;i++){
		Num +=3;
		Suma += Num;
	}	
	
	cout<<"\nLa suma de los elementos es: "<<Suma;
	
	return 0;
}
