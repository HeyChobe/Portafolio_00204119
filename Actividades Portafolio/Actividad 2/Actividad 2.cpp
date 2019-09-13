#include <iostream>
using namespace std;

int main(){
	
	int n=0, aux=0, med=0;
	double med2=0, a=0, b=0;
	
	//Obteniendo el tamaÒo del arreglo
	cout<<"Ingrese el tamanio del arreglo: ";
	cin>>n;
	cout<<endl;
	cout<<endl;
	
	int arreglo[n];
	
	//Ingresando los datos del arreglo[n]
	cout<<"Ingrese los valores:"<<endl;
	cout<<"--> ";
	for(int i=0;i<n;i++){
		cin>>arreglo[i];
		cout<<endl;
		cout<<"--> ";
	}
	cout<<endl;
	
	//Ordenando el arreglo ascendentemente
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){//En mi complilador era necesario poner "n-1" ya que sin eso me ponia un 0 en arreglo[0]
			if(arreglo[j]>arreglo[j+1]){
				aux=arreglo[j];
				arreglo[j]=arreglo[j+1];
				arreglo[j+1]=aux;
			}
		}
	}
	
	//Algoritmo para saber la mediana cuando "n" es IMPAR
	if(n%2!=0){
		med=n/2;
		cout<<"La mediana es: "<<arreglo[med]<<endl;
	}
	
	//Algoritmo para saber la mediana cuando "n" es PAR	
	else{
		a=arreglo[(n/2)-1];
	    b=arreglo[n/2];
		med2=(a+b)/2;
		cout<<"La mediana es: "<<med2<<endl;
	}

return 0;
}
