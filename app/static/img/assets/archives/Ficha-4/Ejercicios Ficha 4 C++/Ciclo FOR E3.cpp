/*3)	Que imprima los N primeros elementos de la serie:
1 	100	 7
2	 95  9
3	 90	 11
*/

#include<iostream>

using namespace std;

int main(){
	int N, X=100, Z=7;
	
	do{
		cout<<"Ingrese un limite: ";
		cin>>N;
	}while(N < 1);
		
	for(int i=1; i<=N;i++){
		cout<<i<<"  "<<X<<"  "<<Z<<endl;
		X -=5;
		Z +=2;
	}

	return 0;
}
