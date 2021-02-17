#include<iostream>

using namespace std;
class Persona{
	protected : string nombre,apellido,puesto,direccion;
	   int sueldo,telefono; 
	    
	    protected : 
	    Persona(){
	    		}
	    	Persona(string nom,string ape, string pus,string dire, int sul,int tel){
	    		nombre=nom;
	    		apellido=ape; 
	    		puesto=pus;
	    		sueldo=sul;
	    		direccion=dire; 
	    		telefono=tel;
			}
	
	    
	   void mostrar();
	   void mostrar2();	
}; 
 
