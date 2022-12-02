/*4)	Que imprima los N primeros múltiplos de 3
1 No es múltiplo de 3
2 No es múltiplo de 3
3 SI ES MÚLTIPLO DE 3
4 No es múltiplo de 3
*/

#include<iostream>

using namespace std;

int main(){
	int N;
	
	cout<<"Ingrese limite: ";
	cin>>N;
	
	for(int i = 1; i <= N; i++){
		if(i % 3 == 0)
			cout<<i<<" si es multiplo de 3"<<endl;
		else
			cout<<i<<" no es multiplo de 3"<<endl;
	}
	
	
	
	
	return 0;
}
