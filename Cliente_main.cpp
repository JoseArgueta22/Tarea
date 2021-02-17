#include "Class_Cliente.cpp"
#include<iostream>
using namespace std; 
main(){
   string nit,nombre,apellido,direccion,puesto;
   int telefono,sueldo;
   
   cout<<"Ingrese Nit"<<endl;
   cin>>nit;
   cout<<"Ingrese nombre"<<endl;
   cin>>nombre;
   cout<<"Ingrese apellido"<<endl; 
   cin>>apellido; 
   cout<<"Direccion"<<endl; 
   cin>>direccion; 
   cout<<"Telefono"<<endl;
   cin>>telefono; 
   
   cout<<""<<endl;
   Cliente obj2 = Cliente(nombre,apellido,puesto,sueldo,telefono,direccion,nit); 
   obj2.mostrar2();
    
   }
    
