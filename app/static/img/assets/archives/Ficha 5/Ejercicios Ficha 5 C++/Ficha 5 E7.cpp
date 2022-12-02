/*7)	Siga modificando el programa anterior para que saque el promedio de los pares y el promedio de los impares.*/

#include<iostream>

using namespace std;

int main(){
	int N, A[100], i, Cont_Par = 0, Cont_Impar = 0, Suma_Par = 0, Suma_Impar = 0;
	float Promedio_Par, Promedio_Impar;
	
	cout<<"Cuantos datos desea ingresar: ";
	cin>>N;
	
	for(i = 0; i <= N - 1; i++){
		cout<<"Dato "<<i<<": ";
		cin>>A[i];
		
		if(A[i] % 2 == 0){
			Cont_Par ++;
			Suma_Par += A[i];
		}
		else{
			Cont_Impar ++;
			Suma_Impar += A[i];
		}
	} 
	
	Promedio_Par = Suma_Par/Cont_Par;
	Promedio_Impar = Suma_Impar/Cont_Impar;
	
	cout<<"\nEn el arreglo hay "<<Cont_Par<<" datos pares."<<endl;
	cout<<"y "<<Cont_Impar<<" datos impares."<<endl;
	
	cout<<"\n\tMostrando los datos pares y su promedio: "<<endl;
	for(i = 0; i <= N - 1; i++){
		if(A[i] % 2 == 0)
			cout<<"Dato "<<i<<": "<<A[i]<<endl;
	}
	cout<<"Su promedio es: "<<Promedio_Par<<endl;
	
	cout<<"\n\tMostrando los datos impares y su promedio: "<<endl;
	for(i = 0; i <= N - 1; i++){
		if(A[i] % 2 != 0)
			cout<<"Dato "<<i<<": "<<A[i]<<endl;
	}
	cout<<"Su promedio es: "<<Promedio_Impar<<endl;
	
	return 0;
}
