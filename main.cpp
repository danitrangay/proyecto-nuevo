#include <iostream>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <stdio.h>

using namespace std;

void menu();
void ingreso();
void consultar();

struct{
	string valores[4], *punt_valores[4];
}persona[10];

void ingreso(){
	int posicion=0;
	
	while(posicion!=11){
		cout<<"solo es para 10 alumnos"<<endl;
		cout<<"ingrese alguna posicion"<<endl;
		cin>>posicion;
		if(posicion==1){
			menu();
		}else{
			if(posicion!=11){
				
			}
			for (int i=0; i<4; i++){
				if(i==0){
					cout<<"ingrese el nombre del estudiante"<<endl;
				}else{
					if(i==1){
						cout<<"ingrese el apellido del estudiante"<<endl;
					}else{
					if(i==2){
						cout<<"ingrese el numero del estudiante"<<endl;
					}else{
						cout<<"ingrese el email del estudiante"<<endl;
					}
					}
				}
				cin>>persona[posicion-1].valores[i];
				cout<<"Datos ingresado en la posicion: ";
				persona[posicion-1].punt_valores[i]=&persona[posicion].valores[i];
				cout<<persona[posicion-1].punt_valores[i]<<endl;
				cout<<"------------------------------------------------------"<<endl;
				
				
			}	
			
			
		}
	}
}

void consultar(){
	cout<<"Datos registrados"<<endl;
	for(int e=0;e<10;e++){
		for(int i=0;i<4;i++){
			cout<<"registro: ";
			cout<<persona[e].valores[i];
			cout<<"posicion: ";
			persona[e].punt_valores[i]= &persona[e].valores[i];
			cout<<persona[e].punt_valores[i]<<endl;
		}
		
	}
}
void menu(){
	int val=1;
	do{
		cout<<"Bienvenido"<<endl;	
		cout<<"           "<<endl;
		cout<<"1. Ingresar datos"<<endl;
		cout<<"2. consultar datos"<<endl;
		cout<<"3. exit"<<endl;
		cin>>val;
		if(val==1){
			ingreso();
		}else{
			if(val==2){
				consultar();
			}else {
				if(val==3){
					system("exit");
				}	
			}
		}
		
	}while(val>3||val<0);
}


int main(int argc, char** argv){
	
	menu();
	return 0;
}
