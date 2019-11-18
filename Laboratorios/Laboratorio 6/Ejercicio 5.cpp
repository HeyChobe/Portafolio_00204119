#include <iostream>

using namespace std;

//------ Creacion de nodo y de arbol ------
struct nodo{
    int info;
    struct nodo *izq;
    struct nodo *der;
};
typedef struct nodo Nodo;
typedef struct nodo *Arbol;
Arbol arbol;

Arbol crearArbol(int x){
    Arbol p = new Nodo;
    p->info = x;
    p->izq = NULL;
    p->der = NULL;
    return p;
}

//------ Agregar nodos a un arbol ------
void asignarIzq(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->izq != NULL)
        cout << "Error: subarbol IZQ ya existe" << endl;
    else
        a->izq = crearArbol(unDato);
}

void asignarDer(Arbol a, int unDato){
    if(a == NULL)
        cout << "Error: arbol vacio" << endl;
    else if(a->der != NULL)
        cout << "Error: subarbol DER ya existe" << endl;
    else
        a->der = crearArbol(unDato);
}

void agregarNodo(Arbol a, int numero){
    Arbol p = a;
    
    //desplazarse hasta el lugar adecuado
    while(true){
        if(numero == p->info){
            cout << "Error: " << numero << " ya existe" << endl<<endl;
            return;
        }
        else if(numero < p->info){//ir a la izquierda
            if(p->izq == NULL)
                break;
            else
                p = p->izq;
        }
        else{//ir a la derecha
            if(p->der == NULL)
                break;
            else
                p = p->der;
        }
    }
    
    //agregar el nuevo nodo
    if(numero < p->info)
        asignarIzq(p, numero);
    else
        asignarDer(p, numero);
}

//------ Recorrer un arbol (in, pre y post orden) ------
void preorden(Arbol a){
    if(a != NULL){
        cout << "["<< a->info<<"]";
        preorden(a->izq);
        preorden(a->der);
    }
}
void inorden(Arbol a){
    if(a != NULL){
        inorden(a->izq);
        cout << "["<< a->info<<"]";
        inorden(a->der);
    }
}
void postorden(Arbol a){
    if(a != NULL){
        postorden(a->izq);
        postorden(a->der);
        cout << "["<< a->info<<"]";
    }
}

void recorrerArbol(Arbol a){
    if(a!=NULL){
        cout << "\n\tRecorrido PRE orden:"; preorden(a); cout << endl;
        cout << "\n\tRecorrido IN orden:"; inorden(a); cout << endl;
        cout << "\n\tRecorrido POST orden:"; postorden(a); cout << endl;
    }
    else{
        cout<<"Arbol Vacio!"<<endl;
        return;
    }
}
    

//------- Creacion del nodo Lista ------
struct Tnodo{
    int dato;
    struct Tnodo *sig;
}; typedef struct Tnodo Lista;
Tnodo *pInicio;

void InsLista(int n){
    Lista *Nuevo=new Lista;
    Nuevo->dato=n;
    Nuevo->sig=NULL;
    
    if(pInicio==NULL){
        pInicio=Nuevo;
    }
    else{
        Lista *p=pInicio;
        Lista *q=NULL;
        
        while(p!=NULL){
            q=p;
            p=p->sig;
        }
        q->sig=Nuevo;
    }
}

void MostrarLista(){
    Lista *p=pInicio;
    
    if(p==NULL){
        cout<<"La lista esta vacia";
        return;
    }
    
    while(p!=NULL){
        cout<<"["<<p->dato<<"]";
        p=p->sig;
    }
    cout<<endl;
}

void Actualizar(Arbol a){
    int valor=0;
    Lista *p=pInicio;
    
    if(p==NULL){
        cout<<"La fila esta vacia"<<endl;
        return;
    }
    
    while(p!=NULL){
        valor=p->dato;
        
        if(a==NULL){
            a=crearArbol(valor);
        }
        else {
            agregarNodo(a,valor);
        }
        p=p->sig;
    }
    cout<<"Actualizado!!"<<endl<<endl;
    cout<<"Lista: "; MostrarLista();
    cout<<"\nArbol: "; recorrerArbol(a);
    cout<<endl;
    
}

int main(){
    pInicio=NULL;
    bool FIN=false;
    int opcion=0, aux=0;
    arbol=NULL;
    
    do{
        cout<<"Menu: \n\t1) Ingresar a la lista\n\t2) Actualizar\n\t3) Salir\nSu opcion: ";
        cin>>opcion;
        
        switch (opcion){
            case 1: cout<<"\nValor a ingresar: "; cin>>aux;
                InsLista(aux);
                break;
            case 2: Actualizar(arbol);
                break;
            case 3: FIN=false;
                break;
            default: cout<<"Opcion equivocada!"<<endl;
                break;
        }
    }while(FIN==false);
}
