#include <iostream>
using namespace std;

struct TNodo{
    int dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;

void Insertar(int p) {
    Nodo *nuevo = new Nodo;
    nuevo->dato = p;
    nuevo->sig = NULL;
    
    if (pInicio == NULL) {
        pInicio = nuevo;
    } else {
        Nodo *p = pInicio;
        Nodo *q = NULL;
        while (p != NULL) {
            q = p;
            p = p->sig;
        }
        q->sig = nuevo;
    }
}

void Mostrar(int x){
    cout<<"["<<x<<"]";
}

void mostrarLista() {
    Nodo *s = pInicio;
    
    if(s==NULL){
        cout<<"No hay elementos en la lista"<<endl;
        return;
    }
    
    while (s != NULL) {
        Mostrar(s->dato);
        s = s->sig;
    }
    cout<<endl<<endl;
}

//Por razones que desconozco, me elimina los elementos comunes, pero siempre me deja 1 sin eliminar
void FelimV(Nodo *l, int x){
    Nodo *q=NULL;
    l=pInicio;
    
    if(l == NULL){
        cout<<"No hay elementos!"<<endl;
        return;
    }
    
    while(l != NULL){
        
    if(x == l->dato){
        if(q == NULL){
            pInicio = l->sig;
        }
        else
            q->sig = l->sig;
        delete(l);
    }
        q=l;
        l=l->sig;
    }
    
}

int main(){
    pInicio=NULL;
    Nodo Fila;
    bool FIN=false;
    int opcion=0, x=0;
    
    do{
        cout<<"Que desea hacer?";
        cout<<"\n\t1) Insertar Elementos\n\t2) Ver Elementos\n\t3) Eliminar un numero en especifico\n\t4) Salir";
        cout<<"\nSu opcion: ";
        cin>>opcion;
        cout<<endl;
        
        switch (opcion) {
            case 1:
                cout<<"Valor por ingresar: ";
                cin>>x;
                cout<<endl;
                Insertar(x);
                break;
            case 2:
                mostrarLista();
                break;
            case 3: cout<<"Valor por eliminar: ";
                cin>>x;
                cout<<endl;
                FelimV(&Fila,x);
                break;
            default: cout<<"Opcion erronea!"<<endl;
                break;
        }
        
    }while(FIN==false);
    
}
