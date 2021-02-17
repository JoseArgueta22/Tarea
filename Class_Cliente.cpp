#include "Persona.cpp"
#include<iostream>

using namespace std; 
class Cliente:Persona{
	private: string nit;

	
	public : 
	Cliente(){
	}
	
	Cliente(string nom,string ape, string pus,int sul,int tel,string dire, string n):Persona(nom,ape,pus,dire,sul,tel) {
		nit=n;
	
		
	}
	void mostrar2(){
		cout<<"Datos del Cliente:"<<endl;
		cout<<nit<<"_"<<nombre<<"_"<<apellido<<"_"<<direccion<<"_"<<telefono<<"_"<<nit<<""<<endl;
		
	} 
};
