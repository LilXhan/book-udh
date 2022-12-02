/*7)	Modificar el programa 5 para que además imprima la suma y promedio 
de los pares y de los impares respectivamente.*/

#include<iostream>

using namespace std;

int main(){
	int N, Num, SumaPar = 0, SumaImpar = 0, ContPar = 0, ContImpar = 0;
	float PromedioPar = 0, PromedioImpar = 0;
	
	cout<<"Ingrese limite: ";
	cin>>N;
	
	for(int i=1; i<=N; i++){
		cout<<"Numero "<<i<<": ";
		cin>>Num;
		
		if(Num % 2 == 0){
			cout<<"Este numero es par."<<endl;
			SumaPar = SumaPar + Num;
			ContPar++;
		}
		else{
			cout<<"Este numero es impar."<<endl;
			SumaImpar = SumaImpar + Num;
			ContImpar++;
		}
	}
	
	PromedioPar = SumaPar/ContPar;
	PromedioImpar = SumaImpar/ContImpar;
	
	cout<<"La suma de los pares es: "<<SumaPar<<endl;
	cout<<"El promedio de los pares es: "<<PromedioPar<<endl;
	
	cout<<"\nLa suma de los impares es: "<<SumaImpar<<endl;
	cout<<"El promedio de los impares es: "<<PromedioImpar<<endl;
	
	
	return 0;
}
