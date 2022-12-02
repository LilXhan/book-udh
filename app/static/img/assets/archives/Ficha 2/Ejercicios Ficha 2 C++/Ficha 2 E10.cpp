/*Dado un valor de "x" calcular el valor de "y" según la siguiente función:*/

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){
	float X, Y = 0;
	
	cout<<"Ingrese el valor de X: ";
	cin>>X;
	
	if(X <= 11){
		Y = (3*X) + 36;
		cout<<"\nEl valor de Y es: "<<Y;
	}
	else{
		if(X > 11 and X <= 33){
			Y = (pow(X, 2)) - 10;
			cout<<"\nEl valor de Y es: "<<Y;
		}
		else{
			if(X > 33 and X <= 64){
				Y = X + 6;
				cout<<"\nEl valor de Y es: "<<Y;
			}
			else{
				cout<<"\nEl valor de Y es cero";
			}
		}
	}
		
	getch();
	return 0;
}
