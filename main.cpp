#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <cstring>
#include "clases.h"
#include "menues.h"
using namespace std;

int main(){
setlocale(LC_ALL, "Spanish");
int opcion;
while(true){
    cout<<"                   TALLER MECÁNICO                   ";cout<<endl;
    cout<<"----------------------------------------------------------";cout<<endl;
    cout<<"                    MENÚ PRINCIPAL                       ";cout<<endl;
    cout<<"1) Repuestos";cout<<endl;
    cout<<"2) Clientes";cout<<endl;
    cout<<"3) Vehículos";cout<<endl;
    cout<<"4) Trabajos";cout<<endl;
    cout<<"---------------------------------------------------------";cout<<endl;
    cout<<"0) Salir";cout<<endl;
    cout<<"---------------------------------------------------------";cout<<endl;
    cout<<"Seleccionar opción: ";cin>>opcion;cout<<endl;
    system("cls");
    switch(opcion){
    case 1: repuestos();
    break;
    case 2: clientes();
    break;
    case 3: vehiculos();
    break;
    case 4: trabajos();
    break;
    case 0: return 0;
    break;
    default: cout<<"Opción inválida, vuelva a intentarlo";cout<<endl;
}
}
return 0;
}
