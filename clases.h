#ifndef CLASES_H_INCLUDED
#define CLASES_H_INCLUDED
using namespace std;
class Fecha{
  private:
    int dia;
    int mes;
    int anio;
    bool esbisiesto(int);
    void NumeroSerieaFecha(int);
  public:
    Fecha(int d=0,int m=0,int a=0);
    int getDia(){return dia;}
    int getMes(){return mes;}
    int getAnio(){return anio;}
    void setDia(int d){dia=d;}
    void setMes(int m){mes=m;};
    void setAnio(int a){anio=a;}
    void MostrarFecha();
    void MostrarFechaTexto();

};



class repuesto{
 private:
     char cod[5];
     int stock;
     float precio;
     char nombre[30];
 public:
    repuesto(const char *, int , float , const char *);
    const char *getcod(){return cod;}
    int getstock(){return stock;}
    float getprecio(){return precio;}
    const char *getnombre(){return nombre;}
    void setcod(const char *c){strcpy(cod,c);}
    void setstock(int stk ){stock=stk;}
    void setprecio(float p){precio=p;}
    void setnombre(const char *n){strcpy(nombre,n);}
    void mostrarrepuesto();
};
repuesto::repuesto(const char *c, int stk, float p,const char *n){
 strcpy(cod, c);
 stock=stk;
 precio=p;
 strcpy(nombre, n);
}
void repuesto::mostrarrepuesto(){
cout<<"Código: ";cout<<cod;
cout<<"Nombre: ";cout<<nombre;
cout<<"Stock: ";cout<<stock;
cout<<"Precio: ";cout<<precio;
}
class cliente{
 private:
     int dni;
     char nombre[50];
     char apellido[50];
     int contacto;
};

class vehiculo{
 private:
     int dni;
     char patente[10];
     char marca[50];
     int modelo;
};

class trabajo{
 private:
     int dni;
     char patente[10];
     float precio;
     Fecha fechareg;
     char observacion[300];
     int garantia;
};



#endif // CLASES_H_INCLUDED
