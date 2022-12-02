/*Realice un algoritmo que permita el ingreso de N números enteros y luego que reporte lo siguiente.
"	Cantidad de pares positivos
"	Suma de pares positivos
"	Promedio de pares positivos
"	Cantidad de pares negativos
"	Suma de pares negativos
"	Promedio de pares negativos
Y PARA IMPARES
*/

#include<iostream>

using namespace std;

int main(){
	int i = 1, N, Num;
	int Cant_Par_Positivo = 0, Cant_Par_Negativo = 0, Suma_Par_Positivo = 0, Suma_Par_Negativo = 0;
	int Cant_Impar_Positivo = 0, Cant_Impar_Negativo = 0, Suma_Impar_Positivo = 0, Suma_Impar_Negativo = 0;
	float Promedio_Par_Positivo = 0, Promedio_Par_Negativo = 0, Promedio_Impar_Positivo = 0, Promedio_Impar_Negativo = 0;
	
	cout<<"Cuantos numeros desea ingresar: ";
	cin>>N;
	
	while(i<=N){
		cout<<"Dato "<<i<<": ";
		cin>>Num;
		
		if(Num % 2 == 0){
			if(Num >= 0){
				Suma_Par_Positivo += Num;
				Cant_Par_Positivo ++;
			}
			else{
				Suma_Par_Negativo += Num;
				Cant_Par_Negativo ++;
			}
		}
		else{
			if(Num > 0){
				Suma_Impar_Positivo += Num;
				Cant_Impar_Positivo ++;
			}
			else{
				Suma_Impar_Negativo += Num;
				Cant_Impar_Negativo ++;
			}
		} i++;
	}
	
	Promedio_Par_Positivo = Suma_Par_Positivo/Cant_Par_Positivo; 
	Promedio_Par_Negativo = Suma_Par_Negativo/Cant_Par_Negativo;
	Promedio_Impar_Positivo = Suma_Impar_Positivo/Cant_Impar_Positivo;
	Promedio_Impar_Negativo = Suma_Impar_Negativo/Cant_Impar_Negativo;
	
	cout<<"\n\tPares Positivos."<<endl;
	cout<<"La suma es: "<<Suma_Par_Positivo<<endl;
	cout<<"La cantidad es: "<<Cant_Par_Positivo<<endl;
	cout<<"El promedio es: "<<Promedio_Par_Positivo<<endl;
	
	cout<<"\n\tPares Negativos."<<endl;
	cout<<"La suma es: "<<Suma_Par_Negativo<<endl;
	cout<<"La cantidad es: "<<Cant_Par_Negativo<<endl;
	cout<<"El promedio es: "<<Promedio_Par_Negativo<<endl;
	
	cout<<"\n\tImpares Positivos."<<endl;
	cout<<"La suma es: "<<Suma_Impar_Positivo<<endl;
	cout<<"La cantidad es: "<<Cant_Impar_Positivo<<endl;
	cout<<"El promedio es: "<<Promedio_Impar_Positivo<<endl;
	
	cout<<"\n\tImpares Negativos."<<endl;
	cout<<"La suma es: "<<Suma_Impar_Negativo<<endl;
	cout<<"La cantidad es: "<<Cant_Impar_Negativo<<endl;
	cout<<"El promedio es: "<<Promedio_Impar_Negativo<<endl;
	
	return 0;
}
