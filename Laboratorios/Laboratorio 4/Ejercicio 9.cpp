#include <iostream>
#include <string>
using namespace std;

struct datos{
    int carnet;
    string nombre;
    string apellido;
    int edad;
    int tel;
    string email;
}; typedef struct datos Datos;

Datos IngresarDatos(){
    Datos i;
    cout<<"\nCarnet: "; cin>>i.carnet; cin.ignore();
    cout<<"\nNombre: "; getline(cin,i.nombre);
    cout<<"\nApellido: "; getline(cin,i.apellido);
    cout<<"\nEdad: "; cin>>i.edad; cin.ignore();
    cout<<"\nTelefono: "; cin>>i.tel; cin.ignore();
    cout<<"\nEmail: "; getline(cin,i.email);
    return i;
}

void MostrarDatos(Datos i){
    cout<<"\nCarnet: "<<i.carnet;
    cout<<"\nNombre: "<<i.nombre;
    cout<<"\nApellido: "<<i.apellido;
    cout<<"\nEdad: "<<i.edad;
    cout<<"\nTelefono: "<<i.tel;
    cout<<"\nEmail: "<<i.email;
    cout<<endl;
}

struct TNodo{
    Datos dato;
    TNodo *sig;
}; typedef struct TNodo Nodo;
Nodo *pInicio;

void InsertarFinal(Datos i){
    Nodo *nuevo= new Nodo;
    nuevo->dato=i;
    nuevo->sig=nullptr;
    
    if(pInicio==nullptr)
        pInicio=nuevo;
    else{
        Nodo *p=pInicio;
        Nodo *q=nullptr;
        
        while(p!=nullptr){
            q=p;
            p=p->sig;
        }
        q->sig=nuevo;
    }
}

void AgregarPersona(){
    Datos i=IngresarDatos();
    InsertarFinal(i);
}

void Mostrar(){
    if(pInicio==nullptr){
        cout<<"No hay personas registradas\n";
        return;
    }
    
    Nodo *mostrar=pInicio;
    while(mostrar!=nullptr){
        MostrarDatos(mostrar->dato);
        mostrar=mostrar->sig;
    }
    cout<<endl;
}

void EliminarPersona(){
    if(pInicio==nullptr){
        cout<<"No hay personas registradas\n";
        return;
    }
    
    int carnet=0;
    cout<<"Inserte el carnet: "; cin>>carnet; cin.ignore();
    Nodo *eliminar=pInicio;
    Nodo *q=nullptr;
    
    while(eliminar!=nullptr && (eliminar->dato).carnet!=carnet){
        q=eliminar;
        eliminar=eliminar->sig;
    }
    
    if(eliminar==nullptr){
        cout<<"Carnet no existente\n";
        return;
    }
    
    if(q==nullptr){
        pInicio=eliminar->sig;
    }
    else{
        q->sig=eliminar->sig;
    }
    delete(eliminar);
    cout<<"Borrado!\n";
}

Datos ModificarDato(Datos i){
    char opcion;
    bool Fin=false;
    
    cout<<"Buscando carnet...";
    cout<<"\nCarnet Identificado!\n";
    MostrarDatos(i);
    
    do{
    cout<<"Que desea modificar?\n\ta) Carnet\n\tb) Nombre\n\tc) Apellido\n\td) Edad\n\te) Telefono\n\tf) Email\n\tg) Listo!\nSu opcion: ";
        cin>>opcion;
    
        switch (opcion){
            case 'a':
            case 'A': cout<<"\nNuevo Carnet: "; cin.ignore(); cin>>i.carnet;
                cin.ignore();
                
                break;
            case 'b':
            case 'B': cout<<"\nNuevo Nombre: "; cin.ignore(); getline(cin,i.nombre);
                
                break;
            case 'c':
            case 'C': cout<<"\nNuevo Apellido: "; cin.ignore(); getline(cin,i.apellido);
                
                break;
            case 'd':
            case 'D': cout<<"\nNueva Edad: "; cin.ignore(); cin>>i.edad;
                cin.ignore();
                
                break;
            case 'e':
            case 'E': cout<<"\nNuevo Telefono: ";cin.ignore(); cin>>i.tel;
                cin.ignore();
                
                break;
            case 'f':
            case 'F': cout<<"\nNuevo Email: "; cin.ignore(); getline(cin,i.email);
                
                break;
            case 'g':
            case 'G':
                Fin=true;
                break;
                
            default: cout<<"Opcion erronea!";
                break;
        }
    }while(Fin==false);
        return i;
}

void ActualizarDatos(){
    if(pInicio==nullptr){
        cout<<"No hay personas registradas\n";
        return;
    }
    
    int carnet=0;
    cout<<"Inserte el carnet: ";
    cin>>carnet; cin.ignore();
    
    Nodo *modificar=pInicio;
    Nodo *q=nullptr;
    
    while(modificar!=nullptr && (modificar->dato).carnet!=carnet){
        q=modificar;
        modificar=modificar->sig;
    }
    
    if(modificar==nullptr){
        cout<<"Carnet no existente!\n";
        return;
    }
    modificar->dato=ModificarDato(modificar->dato);
}

int main(){
    pInicio=nullptr;
    bool Final=false;
    char opcion;
    
    do{
        cout<<"Que desea hacer? ";
        cout<<"\n\ta) Llenar la Lista\n\tb) Eliminar una persona\n\tc) Actualizar los datos de una persona\n\td) Mostrar todas las personas\n\te) Salir\nSu opcion: ";
        cin>>opcion;
        
        switch (opcion) {
            case 'a':
            case 'A': AgregarPersona();
                cout<<endl;
                
                break;
            case 'b':
            case 'B': EliminarPersona();
                cout<<endl;
                
                break;
            case 'c':
            case 'C': ActualizarDatos();
                cout<<endl;
                
                break;
            case 'd':
            case 'D': Mostrar();
                cout<<endl;
                
                break;
            case 'e':
            case 'E':
                cout<<"Saliendo...";
                Final=true;
                break;
        
            default: cout<<"Opcion erronea!\n";
                break;
        }
        
    }while(Final==false);
    
    return 0;
}
