//Activadad 2
#include <iostream>
using namespace std;
float raizc(int, float);

int main(){
    int a=0;
    
    cout<<"Digite un entero: "; cin>>a;
    if(a<0){
        cout<<"No hay raices negativas en los Reales";
    }
    cout<<endl;
    cout<<"Su raiz es "<<raizc(a,a+1);
    
    return 0;
}

float raizc(int n, float r0){
    float r1=((n/r0)+r0)/2;
    
    if((r0-r1)<0.0001){
        return r1;
    }
    else
        return raizc(n,r1);
}

