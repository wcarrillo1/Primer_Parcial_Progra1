#include "alumnos.cpp"
#include <iostream>
#include <windows.h>
#include <conio.h>  
using namespace std;

void gotoxy(int x,int y){  
  HANDLE hcon;  
  hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
  COORD dwPos;  
  dwPos.X = x;  
  dwPos.Y= y;  
  SetConsoleCursorPosition(hcon,dwPos);  
} 

main(){
	
	Alumnos* al;
	int num, op;
	
	do{
		system("cls");
		gotoxy(40,2);cout<<"Bienvenido Al Sistema de Ingreso de Notas "<<endl;
		gotoxy(40,3);cout<<"1.Ingresar Alumnos"<<endl;
		gotoxy(40,4);cout<<"2.Resultados de Los Alumnos"<<endl;
		gotoxy(40,5);cout<<"3.Salir"<<endl;
		gotoxy(40,6);cout<<"Ingresa Una Opcion: "<<endl;
		gotoxy(60,6);cin>>op;
	
		if(op == 1){
		system("cls");
		gotoxy(40,1);cout<<"ingrese la cantidad de Estudiantes: ";
		cin>>num;
		
		
		if(num !=0){
				
			al = new Alumnos[num];
			string nombre1,nombre2,apellido1,apellido2,curso;
		 	int codigo,n1,n2,n3,n4;
			
			for(int i = 0; i < num; i++)
			{
				system("cls");
				gotoxy(40,2);cout<<"Ingreso De Alumnos "<<endl;
				gotoxy(40,3);cout<<"Ingresa El Primer Nombre del alumno No: "<<i+1<<": ";
				cin>>nombre1;
				gotoxy(40,4);cout<<"Ingresa El Segundo Nombre del alumno No: "<<i+1<<": ";
				cin>>nombre2;
				gotoxy(40,5);cout<<"Ingresa El Primer Apellido del alumno No: "<<i+1<<": ";
				cin>>apellido1;
				gotoxy(40,6);cout<<"Ingresa El Segundo Apellido del alumno No: "<<i+1<<": ";
				cin>>apellido2;
				gotoxy(40,7);cout<<"Ingresa el Curso del alumno No: "<<i+1<<": ";
				cin>>curso;
				gotoxy(40,8);cout<<"Ingresa el codigo del alumno No: "<<i+1<<": ";
				cin>>codigo;
				gotoxy(40,9);cout<<"Ingresa la Nota 1 Del alumno No: "<<i+1<<": ";
				cin>>n1;
				gotoxy(40,10);cout<<"Ingresa la Nota 2 Del alumno No: "<<i+1<<": ";
				cin>>n2;
				gotoxy(40,11);cout<<"Ingresa la Nota 3 Del alumno No: "<<i+1<<": ";
				cin>>n3;
				gotoxy(40,12);cout<<"Ingresa la Nota 4 Del alumno No: "<<i+1<<": ";
				cin>>n4;
				al[i] = Alumnos(nombre1,nombre2,apellido1,apellido2,curso,codigo,n1,n2,n3,n4);
			}
			
			}
			
			else{
			cout<<"El Numero No puede ser Menor a 0";
			}
	
	}
	if(op == 2){
		system("cls");
	
		if(num > 0){
			gotoxy(40,3);cout<<"Los resultatos de los Alumnos son: "<<endl;
			int col = 4;
			for(int i =0;i<num; i++){			
			gotoxy(25,col);al[i].Verificador();
			col++;
			}
			getch();
		}else{
			gotoxy(40,3);cout<<"No Existen Datos Aun";
			getch();
		}
			
		
	}
		
	}while(op != 3);
	
	
	
	
		
		
}
