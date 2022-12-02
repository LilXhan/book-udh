//Que muestre la raíz cuadrada, el cuadrado y el cubo de los N primeros números naturales.

#include<iostream>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

int main(){
	float N, x=1, R2, Cua, Cub;
	
	do{
		system("cls");
		cout<<"Ingrese el rango: ";
		cin>>N;
	}while(N<=0);
	
	do{
		R2 = sqrt(x);
		Cua = pow(x,2);
		Cub = pow(x,3);
		system("cls");
		cout<<"La raiz cuadrada de "<<x<<" es: "<<R2<<endl;
		cout<<x<<" al cuadradoes: "<<Cua<<endl;
		cout<<x<<" al cubo es: "<<Cub<<endl;
		getch();
		x++;
	}while(x<=N);
	
	return 0;
}
