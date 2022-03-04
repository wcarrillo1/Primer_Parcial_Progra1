#include <iostream>
using namespace std;

class Alumnos{
	//atributos
	private : string nombre1,nombre2,apellido1,apellido2,curso;
			  int codigo;
			  double nota1,nota2,nota3,nota4;
	
	//constructor 
	public :
		Alumnos (){
		}
		Alumnos(string _nombre1, string _nombre2, string _apellido1,string _apellido2, string _curso, double _codigo, double _nota1,double _nota2,double _nota3,double _nota4){
			nombre1 = _nombre1;
			nombre2 = _nombre2;
			apellido1 = _apellido1;
			apellido2 = _apellido2;
			curso = _curso;
			codigo = _codigo;
			nota1 = _nota1;
			nota2 = _nota2;
			nota3 = _nota3;
			nota4 = _nota4;
 		}
	//metodos
	void Verificador(){
		double prom;
		prom = (nota1+nota2+nota3+nota4)/4;
		
		cout<<"El Alumno: "<<nombre1<<" "<<nombre2<<" "<<apellido1<<" "<<apellido2<<" "<<"Con Promedio "<<" "<<prom<<" "<<(prom >60?" Aprobado":" Reprobado")<<endl;
		
		
	}	

};
