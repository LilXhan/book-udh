/*5)	Que permita el ingreso de N números e imprima si es Par o Impar*/

#include<iostream>

using namespace std;

int main(){
	int N, Num;
	
	cout<<"Ingrese limite: ";
	cin>>N;
	
	for(int i = 1; i <= N; i++){
		cout<<"Numero "<<i<<": ";
		cin>>Num;
		
		if(Num == 0)
			cout<<"El numero es 0"<<endl;
		else 
			if(Num % 2 == 0)
				if(Num > 0)
					cout<<"El numero es par positivo."<<endl;
				else
					cout<<"El numero es par negativo."<<endl;
			else
				if(Num > 0)
					cout<<"El numero es impar positivo."<<endl;
				else
					cout<<"El numero es impar negativo."<<endl;
	}

	return 0;
}
