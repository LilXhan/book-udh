/*2)	Que imprima los N primeros elementos de la serie:
1 	13
2	 15
3	 17…
*/

#include<iostream>

using namespace std;

int main(){
	int Z = 13, N;
	
	cout<<"Ingrese un limite: ";
	cin>>N;
	
	for(int i = 1; i <= N; i++){
		cout<<i<<"  "<<Z<<endl;
		Z = Z +2;
	}
	
	return 0;
}
