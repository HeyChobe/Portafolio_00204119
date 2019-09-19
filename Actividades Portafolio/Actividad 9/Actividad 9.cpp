//Acividad 9
//Pilas Vacias (Dinamica)
#include <iostream>
using namespace std;

struct nodo{
	float elemento;
	struct nodo *siguiente;
	};
typedef struct nodo *Pila;

void iniciar(Pila *s){
	*s=NULL;
	}
	
bool vacia(Pila *s){
	return *s==NULL;
	}
	
void push(Pila *s, float e){
	struct nodo *unNodo;
	unNodo=(struct nodo *)malloc(sizeof(struct nodo));
	unNodo->elemento=e;
	unNodo->siguiente=*s;
	*s=unNodo;
	}
	
float pop(Pila *s){
	if(!vacia(s)){
		struct nodo *unNodo = *s;
		float e = (*s)->elemento;
		*s= (*s)->siguiente;
		delete(unNodo);
		return e;	
		}
		
	else
		cout<<"Underflow!"<<endl;
		return -1;
}

float PilaVacia(Pila *s){
		float e=0;
		while(!vacia(s)){
			e=pop(s);
			}
		return e;
}
	
int main(){
	Pila S;
	iniciar(&S);
	int x=0, y=0, z=0;
	cout<<"Inserte 3 valores a tu pila"<<endl;
	cout<<"Primer valor: "; cin>>x;
	push(&S, x);
	cout<<"\nSegundo valor :"; cin>>y;
	push(&S, y);
	cout<<"\nTercer valor :"; cin>>z;
	push(&S, z);
	
	cout<<endl<<endl;
	cout<<"El elemento del fondo es: "<<PilaVacia(&S)<<endl;
	cout<<"Comprobando si mi pila quedo vacia: "<<vacia(&S);
	
	return 0;
}
