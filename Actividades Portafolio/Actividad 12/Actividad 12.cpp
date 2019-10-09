#include <iostream>
#include <string>

using namespace std;

struct TOrden{
	string nombre;
	int Queso=0;
	int FQ=0;
	int Revueltas=0;
	int Jalapenio=0;
	int Chicharron=0;
	bool Arroz=0;
}; typedef struct TOrden Orden;

struct TNodo{
    Orden dato;
    struct TNodo *sig;
};
typedef struct TNodo Nodo;
Nodo *pInicio;


void insertarFinal(Orden p) {
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

Orden SolicitarOrden(){
	Orden p;
	bool Fin=false;
	
	cout<<"Orden a nombre de: ";
	cin>>p.nombre; 
	cout<<endl;
	
	do{
	int opcion=0;
	cout<<"Que pupusas desea ordenar?"<<endl;
	cout<<"\t1) Queso\n\t2) Frijol con Queso\n\t3) Revueltas\n\t4) Jalapenio\n\t5) Chicharron\n\t6) Listo!!";
	cout<<"\nSu opcion: ";
	cin>>opcion; cout<<endl;
	
	switch(opcion){
		case 1: cout<<"\nIngrese la cantidad: "; cin>>p.Queso;		
				break;
		case 2: cout<<"\nIngrese la cantidad: "; cin>>p.FQ;
				break;
		case 3: cout<<"\nIngrese la cantidad: "; cin>>p.Revueltas;
				break;
		case 4: cout<<"\nIngrese la cantidad: "; cin>>p.Jalapenio;
				break;
		case 5: cout<<"\nIngrese la cantidad: "; cin>>p.Chicharron;
				break;
		case 6: Fin=true;
				break;		
		default: cout<<"\nOpcion invalida"<<endl;
				break;
	}	
}while(Fin==false);

char Arroz;
cout<<"Desea que las pupusas sean de arroz(S/N)?: "; cin>>Arroz;
if(Arroz=='s'||Arroz=='S'){
	p.Arroz=true;
}
else p.Arroz=false;

insertarFinal(p);
return p;
}

void MostrarOrden(Orden p){
	cout<<"Orden a nombre de: "<<p.nombre<<endl;
	cout<<"\t"<<p.Queso<<"- Queso"<<"\n\t"<<p.FQ<<"- Frijol con Queso"<<"\n\t"<<p.Revueltas<<"- Revueltas"<<"\n\t"<<p.Jalapenio<<"- Jalapenio"<<"\n\t"<<p.Chicharron<<"- Chicharron";
	cout<<"\nOpcion de masa: ";
	if(p.Arroz==true){
		cout<<"Arroz"<<endl;
	}
	else cout<<"Maiz"<<endl;
	
	cout<<endl;
}

void MostrarLista(){
	Nodo *s=pInicio;
	
	if(s==NULL){
		cout<<"No hay ordenes pendientes"<<endl<<endl;
	}
	
	while(s!=NULL){
		MostrarOrden(s->dato);
		s=s->sig;
	}
	
}

int main(){
	pInicio=NULL;
	bool Fin=false;
	
	do{
		int opcion=0;
		cout<<"Bienvenido a..."<<"\n*TU MEJOR OPCION EN PUPUSAS*"<<endl;
		cout<<"Que desea hacer?"<<endl;
		cout<<"\t1) Ordenar\n\t2) Mostrar Ordenes\n\t3) Salir"<<endl;
		cout<<"\nSu opcion: ";cin>>opcion; cout<<endl;
		
		switch(opcion){
			case 1: SolicitarOrden();
					break;
			case 2: MostrarLista();
					break;
			case 3: Fin=true;
					break;
			default: cout<<"Opcion incorrecta!";
					break;			
		}
	}while(Fin==false);
	return 0;
}
