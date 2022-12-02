/*Que imprima del 1 al 10 usando el bucle while o MQ (Mientras Que)*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int x = 1;
	
	do{
		cout<<x<<endl;
		x++;
		getch();
	}while(x<=10);
	
	cout<<"Ultimo valor de x: "<<x;
	
	
	return 0;
}
