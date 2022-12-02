/*Realice un algoritmo que permita mostrar un menú de opciones: 1) área del círculo 2) área del triángulo 3) área del trapecio 4) área ... 
y luego que calcule y muestre el resultado respectivo.*/

#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){
	int opcion;
	float r, b, h, BM, bm, D, d, AC = 0, ATri = 0, ATra = 0, ARo = 0, ARe = 0; 
	
	cout<<"\tPROGRAMA QUE CALCULA EL AREA DE ALGUNAS FIGURAS";
	cout<<"\n1. Area del circulo. "<<endl;
	cout<<"2. Area del triangulo. "<<endl;
	cout<<"3. Area del area del trapecio. "<<endl;
	cout<<"4. Area del rombo. "<<endl;
	cout<<"5. Area del rectangulo. "<<endl;
	cout<<"6. Salir "<<endl;
	cout<<"\nEscoja una opcion: ";
	cin>>opcion;
	
	switch(opcion){
		case 1:
			cout<<"\nIngrese el radio del circulo: ";
			cin>>r;
			AC = 3.1416 * (pow(r, 2));
			cout<<"\nEl area del circulo es: "<<AC; break;
		case 2:
			cout<<"\nIngrese la base del triangulo: ";
			cin>>b;
			cout<<"Ingrese la altura del triangulo: ";
			cin>>h;
			ATri = (b*h)/2;
			cout<<"\nEl area del triangulo es: "<<ATri; break;
		case 3:
			cout<<"\nIngrese la base mayor del trapecio ";
			cin>>BM;
			cout<<"\nIngrese la base menor del trapecio: ";
			cin>>bm;
			cout<<"Ingrese la altura del trapecio: ";
			cin>>h;
			ATra = ((BM + bm)*h)/2;
			cout<<"\nEl area del trapecio es: "<<ATra; break;
		case 4:
			cout<<"\nIngrese el diametro mayor del rombo: ";
			cin>>D;
			cout<<"\nIngrese el diametro menor del rombo: ";
			cin>>d;
			ARo = (D * d)/2;
			cout<<"\nEl area del rombo es: "<<ARo; break;
		case 5:
			cout<<"\nIngrese la base del rectangulo: ";
			cin>>b;
			cout<<"Ingrese la altura del rectangulo: ";
			cin>>h;
			ARe = b*h;
			cout<<"\nEl area del rectangulo es: "<<ARe; break;
		case 6: break;
		default: cout<<"Esta opcion no existe. "; break;	
	}
	
	getch();
	return 0;
}
