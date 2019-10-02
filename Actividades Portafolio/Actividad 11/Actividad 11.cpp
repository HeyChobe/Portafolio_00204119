//Carlos Roberto Cortez Iraheta
//Colas Circulares

#include <iostream>
using namespace std;

//Declaro variables globales para que no se me reciclen los valores en las llamadas de las funciones correspondientes
int n=0, frente=0;

void Insertar(int *Cola, int tam, int ubi){
    int valor=0;
    
    //Verifico si mi cola esta llena, comparando mi n(pivote) con mi tamanio del arreglo
    if(n==tam){
        cout<<"La cola esta llena"<<endl<<endl;
    }
    else{
        cout<<"Ingrese un valor"<<n<<": ";cin>>valor;
        ubi=(frente+n)%tam; //Genero la ubicacion en que posicionare mi dato ingresado
        Cola[ubi]=valor; //Ingreso el dato en la ubicacion
        n++; //Aumento mi pivote
    }
}

void Eliminar(int *Cola, int tam, int ubi){
    Cola[frente]=0; //Elimino mi frente
    frente=(frente+1)%tam; //Genero mi nuevo frente (Frente + 1)
    n--; //Disminuyo mi pivote para mi proxima llamada de la funcion insertar
}

void Mostrar(int *Cola, int tam){
    for(int i=0; i<tam; i++){
        cout<<"["<<Cola[i]<<"]";
    }
    cout<<endl<<endl;
}

bool Parar(){
    cout<<"\n\nFIN DEL PROGRAMA";
    exit(-1);
}

int main(){
    int X=0, ubi=0;
    char opcion;
    bool final=false;
    
    cout<<"Inserte el tamanio de la cola: ";
    cin>>X;
    int Cola[X];
    
    //LLeno mi cola de ceros
    for(int i=0; i<X; i++){
        Cola[i]=0;
    }
    
    while(final==false){
        cout<<"\nQue desea hacer?\na)Insertar valor\nb)Eliminar valor\nc)Mostrar\nd)Parar";
        cout<<endl<<endl;
        cin>>opcion;
        
        if(opcion=='A'||opcion=='a'){
            Insertar(Cola,X,ubi);
        }

        if(opcion=='B'||opcion=='b'){
            Eliminar(Cola,X,ubi);
        }
        
        if(opcion=='C'||opcion=='c'){
            Mostrar(Cola,X);
        }
        
        if(opcion=='D'||opcion=='d'){
            Parar();
        }
    }
    return 0;
}
