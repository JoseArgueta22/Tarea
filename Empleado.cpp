#include "Persona.cpp"
#include<iostream>

using namespace std; 
class Empleado:Persona{
	private: string nit;

	public : 
	Empleado(){
	}
	
	Empleado(string nom,string ape, string pus,int sul, int tel,string dire,string n):Persona(nom,ape,pus,dire,sul,tel){
		nit=n;
	
		
	}
	void mostrar(){
		cout<<"Datos del empleado:"<<endl;
		cout<<nit<<"_"<<nombre<<"_"<<apellido<<"_"<<puesto<<"_"<<sueldo<<endl;
		
	}
}; 
