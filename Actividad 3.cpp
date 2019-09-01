#include <iostream>
#include <string>
using namespace std;

//Esta estructura me permitira colocar los datos de cada continente
struct info_Pais{
    string Nombre;
    string Capital;
    int Poblacion;
    int Prom;
};

//Esta estructura me permite poder diferenciar mis continentes, ademas struct info_Pais para obtener los datos que necesito
struct Continente{
    string Nombre;
    struct info_Pais Info[5];//Creo un arreglo de 5 estructuras para la informacion de los paises
}Continentes[5];//Creo un arreglo de 5 estructuras de Continente

int main(){
//Esto ya es para el Miercoles, pero avance de igual manera

/*  for(int i=0; i<5; i++){
        cout<<"Ingrese el continente: ";
        getline(cin,Continentes[i].Nombre);cout<<endl;
        for(int j=0; j<5; j++){
            cout<<"Ingrese el pais: ";
            getline(cin,Continentes[i].Info[j].Nombre);cout<<endl;
            cout<<"Ingrese su capital: ";
            getline(cin,Continentes[i].Info[j].Capital);cout<<endl;
            cout<<"Ingrese su poblacion: ";
            cin>>Continentes[i].Info[j].Poblacion;cout<<endl;
            cin.ignore();
            cout<<"Ingrese el promedio de edad: ";
            cin>>Continentes[i].Info[j].Prom;cout<<endl;
            cin.ignore();
        }
    }
    
    for(int i=0; i<5; i++){
        cout<<"\nContinente: "<<Continentes[i].Nombre<<endl;
        for(int j=0; j<5; j++){
            cout<<"Pais: "<<Continentes[i].Info[j].Nombre<<endl;
            cout<<"Capital: "<<Continentes[i].Info[j].Capital<<endl;
            cout<<"Poblacion: "<<Continentes[i].Info[j].Poblacion<<endl;
            cout<<"Promedio de edad: "<<Continentes[i].Info[j].Prom<<endl;
            cout<<endl;
        }
    }
  return 0;
*/
}

    

