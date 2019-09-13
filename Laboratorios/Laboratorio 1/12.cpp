//Ejercicio 12
#include <iostream>
using namespace std;

int main(void){
    int entero=0, rd=0, enteroI=0;

    cout<<"Ingrese un entero: "; cin>>entero; cout<<endl<<endl;
    while(entero>0){
        rd=entero%10;
        entero/=10;
        enteroI=(enteroI*10)+rd;
    }

    cout<<"Su entero invertido es: "<<enteroI;
    return 0;
}
