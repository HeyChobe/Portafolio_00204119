//Ejercicio 23
#include <iostream>
using namespace std;

struct Complejos{
    int Real;
    int Imag;
}Comp[2];

void Suma(){
    int sumaR=0, sumaI=0;

    cout<<"Ingrese el primer numero complejo"<<endl<<endl;
    cout<<"Parte Real: "; cin>>Comp[0].Real; cout<<endl;
    cout<<"Parte Imaginaria: "; cin>>Comp[0].Imag; cout<<endl<<endl;
    cout<<"Ingrese el segundo numero complejo"<<endl<<endl;
    cout<<"Parte Real: "; cin>>Comp[1].Real; cout<<endl;
    cout<<"Parte Imaginaria: "; cin>>Comp[1].Imag; cout<<endl<<endl;

    sumaR=Comp[0].Real + Comp[1].Real;
    sumaI=Comp[0].Imag + Comp[1].Imag;

    cout<<"--PROCEDIMIENTO--"<<endl;
    cout<<"("<<Comp[0].Real<<" + "<<Comp[0].Imag<<"j) + ("<<Comp[1].Real<<" + "<<Comp[1].Imag<<"j)"<<endl;
    cout<<"("<<Comp[0].Real<<" + "<<Comp[1].Real<<") + ("<<Comp[0].Imag<<" + "<<Comp[1].Imag<<")j"<<endl;
    cout<<"\n--RESULTADO--"<<endl;
    cout<<"("<<sumaR<<" + "<<sumaI<<"j)"<<endl;
}

int main(){

    Suma();
    return 0;
}