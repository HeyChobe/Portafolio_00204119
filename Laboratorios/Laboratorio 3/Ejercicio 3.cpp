#include <iostream>
#include <string>
using namespace std;

struct tTyN{
    string T;
    int N;
}; typedef struct tTyN TyN;

struct Tlibro{
    string titulo;
    int numPag;
    Tlibro *sig;
}; typedef struct Tlibro Libro;

struct TNodo{
    TyN Dato;
    TNodo *siguiente;
}; typedef struct TNodo *Pila;

void Iniciar(Pila *s){
    *s=NULL;
}

bool Vacia(Pila *s){
    return *s==NULL;
}

void AgregarLibro(Pila *s, Libro L){
    cout<<"Ingrese el nombre del libro: ";
    cin.ignore();
    getline(cin,L.titulo);
    cout<<"\nNumero de paginas: ";
    cin>>L.numPag;
    struct TNodo *Nuevo;
    Nuevo=(struct TNodo *)malloc(sizeof(struct TNodo));
    Nuevo->Dato.T=L.titulo;
    Nuevo->Dato.N=L.numPag;
    Nuevo->siguiente=*s;
    *s=Nuevo;
    
    if(Vacia(s))
        cout<<"\nPila vacia";
}

void BuscarLibro(Pila *s, Libro L){
    
    if(Vacia(s)){
        cout<<"No hay libros actualmente!";
        cout<<endl<<endl;
        return;
    }
    
    while(!Vacia(s)){
        cout<<"Libro: "<<(*s)->Dato.T;
        cout<<"\nPaginas: "<<(*s)->Dato.N;
        cout<<endl<<endl;
        struct TNodo *unNodo = *s;
        *s= (*s)->siguiente;
        delete(unNodo);
    }
}

int main(){
    Pila S;
    Iniciar(&S);
    Libro L;
    bool Fin=false;
    int opcion=0;
    
    do{
        cout<<"Que desea hacer?:";
        cout<<"\n\t1) Insertar Libros\n\t2) Ver libros\n\t3) Salir";
        cout<<"\nSu opcion: ";
        cin>>opcion;
        cout<<endl;
        
        switch (opcion) {
            case 1: AgregarLibro(&S,L);
                break;
            case 2: BuscarLibro(&S,L);
                break;
            case 3: Fin=true;
                break;
            default: cout<<"Opcion erronea!"<<endl;
                break;
        }
        
    }while(Fin==false);
    
    return 0;
}
