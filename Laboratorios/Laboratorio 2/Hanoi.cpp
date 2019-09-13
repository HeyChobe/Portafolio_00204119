//Actvidad 5c
//Torres de Hanoi
#include<iostream>
using namespace std;

void Hanoi(int n,int A,int B,int C){
    if(n==1){
        cout<<"Mueva el disco de la torre "<<A<<" a la torre "<<C<<endl;
    }
    else{
        Hanoi(n-1,A,C,B);
        cout<<"Mueva el disco de la torre "<<A<<" a la torre "<<C<<endl;
        Hanoi(n-1,B,A,C);
    }
}

int main(){
    int n=0, A=1 ,B=2 ,C=3;
    
    cout<<"--------TORRES DE HANOI--------"<<endl<<endl;
    cout<<"Ingrese el numero de discos: "; cin>>n; cout<<endl<<endl;
    cout<<"Indicaciones:"<<endl<<endl;
    Hanoi(n,A,B,C);
    
    return 0;
}
