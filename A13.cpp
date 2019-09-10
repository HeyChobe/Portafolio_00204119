//Actividad 13
#include <iostream>
using namespace std;

int iter(int);

int main(){
    int n=0;
    
    cout<<"Inserte n: ";
    cin>>n; cout<<endl;
    
    cout<<iter(n);
    return 0;
}

int iter(int n){
    int aux=1;
    
    while(n!=0){
        for(int i=2; i<=n; i++){
            aux+=i;
        }return aux;
    }
    return 0;
}

