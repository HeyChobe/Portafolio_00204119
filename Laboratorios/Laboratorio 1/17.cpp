//Ejercicio 17

#include <iostream>
using namespace std;

int suma(){
	int entero[10], i=0, promedio=0, suma=0;
	cout<<"---Digite 10 numeros enteros---"<<endl;

	while(i!=10){
		cout<<"Ingrese el "<<i+1<<" entero: ";
		cin>>entero[i];
		suma=entero[i]+suma;	
		i++;
	}

	promedio=suma/10;

	cout<<"Suma de los enteros: "<<suma<<endl;
	cout<<"Promedio de los enteros: "<<promedio<<endl;

}

int main(){
	suma();
	return 0;
}
