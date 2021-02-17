#include "Empleado.cpp"
#include<iostream>
using namespace std; 
main(){
   string nit,nombre,apellido,puesto,direccion;
   int sueldo,telefono;
   
   cout<<"Codigo del Empleado"<<endl;
   cin>>nit;
   cout<<"Ingrese nombre"<<endl;
   cin>>nombre;
   cout<<"Ingrese apellido"<<endl; 
   cin>>apellido; 
   cout<<"Puesto"<<endl; 
   cin>>puesto; 
   cout<<"Sueldo"<<endl;
   cin>>sueldo; 
   
   cout<<""<<endl;
   Empleado obj= Empleado(nombre,apellido,puesto,sueldo,telefono,direccion,nit); 
   obj.mostrar();
    
   }
    
