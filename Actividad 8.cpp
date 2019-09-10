//Actividad en clase
//Cree una funcion "Pila_Vacia" que me deja la pila vacia y me guarde el valor del fondo

#include <iostream>
using namespace std;

struct Tpila{
    float elem[2];
    int top;
};
typedef struct Tpila Pila;

void Iniciar(Pila *s){
    s->top=-1;
}

bool empty(Pila *s){
    return (s->top) < 0;
}

void push(Pila *s, float e){
    if(s->top < 1){
        (s->top)++;
        s->elem[s->top] = e;
    }
}

void pop(Pila *s, float *e){
    if(s->top>=0){
        *e=s->elem[s->top];
        (s->top)--;
    }
}

void Pila_vacia(Pila *s){
    float actual=0;
    while((s->top)>-1){
        pop(s, &actual);
        (s->top--);
    }
    float valor=s->elem[0];
    cout<<"El valor del fondo es: "<<valor;
    cout<<endl;
}

void Pila_Intacta(Pila *s){
    Pila Aux;
    Iniciar(&Aux);
 
    float cambio=0;
    while(!(empty(s))){
        pop(s,&cambio);
        push(&Aux,cambio);
    }
    
    float fondo=cambio;
    int cont=0;//Contara los elementos que tengo en la pila s
    
    while(!(empty(&Aux))){
        pop(&Aux,&cambio);
        push(s,cambio);
        cont++;
    }
    
    
    cout<<"El valor del fondo es: "<<fondo<<endl;
    cout<<"Mi pila contiene "<<cont<<" elementos";
    cout<<endl<<endl;
}

int main(){
    Pila S;
    Iniciar(&S);
    
    if(empty(&S)){
        cout<<"Mi pila esta vacia";
        cout<<endl<<endl;
    }
    
    float x=0;
    float y=0;
    
    //Llenando mi pila
    cout<<"Inserte un valor: "; cin>>x;
    cout<<"\nInserte un valor: "; cin>>y;
    cout<<endl;
    
    push(&S, x);
    push(&S, y);
    
    if(!(empty(&S))){
        cout<<"Pila con elementos";
        cout<<endl<<endl;
    }
    else{
        cout<<"Mi pila esta vacia";
        cout<<endl<<endl;
    }
    
    //Obtengo el valor del fondo dejando la pila intacta
    cout<<"---PROCESO PILA INTACTA---"<<endl<<endl;
    Pila_Intacta(&S);
    
    //Quitando los elementos para dejar vacia la pila
    cout<<"---PROCESO PILA VACIA---"<<endl<<endl;
    Pila_vacia(&S);
    
    //Verifico si mi pila esta intacta
    
    if(empty(&S)){
        cout<<"Mi pila esta vacia";
        cout<<endl<<endl;
    }
    return 0;
}

