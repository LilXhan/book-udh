/*8)	Que imprima la suma de los N primeros elementos de la serie: ½ + ¼ + 1/6 ….*/

#include<iostream>

using namespace std;

int main(){
	int i, N; 
	float Suma = 0, X = 2; 
	
	cout<<"Cuantos datos desea ingresar: ";
	cin>>N;
	
	for(i = 1; i<= N; i++){
		cout<<"1/"<<X<<" + ";
		Suma += 1/X;
		
		X += 2;
	}
	
	cout<<"\nLa suma de la serie es: "<<Suma;
	
	return 0;
}
