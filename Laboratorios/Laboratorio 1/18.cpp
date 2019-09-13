//Ejercicio 18
#include <iostream>
using namespace std;

int main() {
    int matriz[5][5]={{0,0,0,0,0},{0,0,0,0,0}};
    int j=0, cont=0;

    //Almacenando valores en la matriz de manera que quede de forma matriz diagonal superior
    for(int i=0; i<5; i++){
        while(j!=5){
            cout<<"Ingrese el valor ["<<i<<"]["<<j<<"]: ";
            cin>>matriz[i][j];
            j++;
        }
        cont++;
        j=cont;
    }
    cout<<endl;

    //Mostrando la matriz generada
    for(int i=0; i<5; i++){
        for(int k=0; k<5; k++){
            cout<<matriz[i][k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
