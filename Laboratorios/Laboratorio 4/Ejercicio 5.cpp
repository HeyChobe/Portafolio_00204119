#include <iostream>

using namespace std;

struct TNodo{
    int dato;
    TNodo *sig;
}; typedef struct TNodo Nodo;
Nodo *pInicio, *NuevoInicio;

void InsertarF(int x){
    Nodo *Nuevo = new Nodo;
    Nuevo->dato=x;
    Nuevo->sig=nullptr;
    
    if(pInicio==nullptr){
        pInicio=Nuevo;
        return;
    }
    
    Nodo *p=pInicio;
    Nodo *q=nullptr;
    
    while(p!=nullptr){
        q=p;
        p=p->sig;
    }
    q->sig=Nuevo;
}

void Mostrar(){
    Nodo *Mostrar=pInicio;
    
    while(Mostrar!=nullptr){
        cout<<"["<<Mostrar->dato<<"]";
        Mostrar=Mostrar->sig;
    }
    cout<<endl;
}

void MostrarInvertido(Nodo *Lista){
    
    while(Lista!=nullptr){
        cout<<"["<<Lista->dato<<"]";
        Lista=Lista->sig;
    }
    cout<<endl;
}

//La recursividad me cuesta aplicarla, pero de igual manera te lo envio aunque no invierta la lista, para que veas que de verdad lo trate
Nodo *Invertir(Nodo *Lista){
    pInicio=Lista;
    
    if(Lista==nullptr){
        pInicio=Invertir(Lista->sig);
        Lista->sig->sig=Lista;
        Lista->sig=nullptr;
    }
    return pInicio;
}

int main(){
    pInicio=nullptr;
    NuevoInicio=pInicio;
    bool Salir=false;
    int opcion=0;
    int valor=0;
    
    do{
        cout<<"Que desea hacer?";
        cout<<"\n\t1) Agregar a la lista\n\t2) Mostrar Lista\n\t3) Invertir Lista\n\t4) Salir";
        cout<<"\nSu opcion: ";
        cin>>opcion;
        switch (opcion) {
            case 1: cout<<"Valor a ingresar: "; cin>>valor;
                InsertarF(valor);
                cout<<endl;
                break;
            case 2: Mostrar();
                cout<<endl;
                break;
            case 3: Invertir(pInicio);
                cout<<endl;
                break;
            case 4: Salir=true;
                break;
            default:cout<<"Opcion erronea!";
                break;
        }
    }while(Salir==false);

    return 0;
}

