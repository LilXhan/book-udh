/*3.	Dado las 4 notas de tareas académicas, el emc y el de fin de curso, calcule su promedio e imprima el mensaje 
respectivo o si ingresa al sustitutorio. En caso afirmativo, reemplazar la menor nota (emc o efc) con el sustitutorio 
y hallar el nuevo promedio final.*/

#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int T1, T2, T3, T4, EMC, EFC, ES;
	float Prom_T = 0, Prom_1 = 0, Prom_2 = 0;
	
	cout<<"Ingrese nota de la primera tarea academica: ";
	cin>>T1;
	cout<<"Ingrese nota de la segunda tarea academica: ";
	cin>>T2;
	cout<<"Ingrese nota de la tercera tarea academica: ";
	cin>>T3;
	cout<<"Ingrese nota de la cuarta tarea academica: ";
	cin>>T4;
	
	Prom_T = (T1+T2+T3+T4) / 4;
	
	cout<<"Ingrese nota del examen de medio curso: ";
	cin>>EMC;
	cout<<"Ingrese nota del examen de fin de curso: ";
	cin>>EFC;
	
	Prom_1 = (Prom_T+EMC+EFC) / 3;
	cout<<setiosflags(ios::fixed)<<setprecision(1);
	
	if(Prom_1 >= 10.5)
		cout<<"Usted aprobo el curso con "<<Prom_1;
	else{
		cout<<"Usted desaprobo el curso con "<<Prom_1<<endl;
		cout<<"Ingrese nota del examen sustitutorio: ";
		cin>>ES;
			
			if(ES > EMC or ES > EFC){
				if(EMC > EFC){
					Prom_2 = (Prom_T+EMC+ES)/3;
						if(Prom_2 >= 10.5)
							cout<<"Usted aprobo el curso";
						else
							cout<<"Usted desaprobo el curso";						
				}
				else{
					Prom_2 = (Prom_T+ES+EFC)/3;
						if(Prom_2 >= 10.5)
							cout<<"Usted aprobo el curso";
						else
							cout<<"Usted desaprobo el curso";	
				}
			}	
			else{
				cout<<"La nota del examen sustitutorio es menor a del examen de medio curso y al de fin de curso."<<endl;
				cout<<"Usted desaprobo el curso.";
			}
	}
	return 0;
}
