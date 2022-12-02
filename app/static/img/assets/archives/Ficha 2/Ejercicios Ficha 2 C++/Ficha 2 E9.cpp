/*Se reciben tres enteros positivos en forma ascendente a<=b<=c. Estos, pueden representar las longitudes de los lados de un tri�ngulo si cumplen 
con (a+b)>c. Si realmente representan un tri�ngulo, encuentre su �rea e indique si es equil�tero, is�sceles o escaleno. 
El �rea del tri�ngulo se calcula mediante la siguiente f�rmula:

	�rea =    sqrt(s*(s-a)*(s-b)*(s-c))
	
Donde: s es la mitad de la suma de los lados a,b y c.
*/

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){
	int a, b, c, x = 0, s = 0, Area = 0;
	
	cout<<"Ingrese el primer valor entero: ";
	cin>>a;
	cout<<"Ingrese el segundo valor entero: ";
	cin>>b;
	cout<<"Ingrese el tercer valor entero: ";
	cin>>c;
	
	x = a+b;
	s = (a+b+c)/2;
	
	if(a <= b and b <= c){
		if(x > c){
			Area = sqrt(s*(s-a)*(s-b)*(s-c));
			if(a == b and b == c and a == c){
				cout<<"El triangulo es equilatero y su area es: "<<Area;
			}
			else{
				if(a == b or a == c or b == c){
					cout<<"El triangulo es isosceles y su area es: "<<Area;
				}
				else{
					cout<<"El trienagulo es escaleno y su area es: "<<Area;
				}
			}
		}
		else{
			cout<<"No es un triangulo. ";
		}
	}
	else{
		cout<<"No cumple con lo requerido. ";
	}
	
	getch();
	return 0;
}
