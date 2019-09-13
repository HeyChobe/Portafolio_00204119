//Carlos Roberto Cortez Iraheta
//00204119
#include <iostream>
using namespace std;

int mult(int a, int b){
	int x=0;
		if(b==1){
			return a;
	}
	else{
		if (b>1){
			return (a + mult(a,b-1));
			}
		}	
}

int main()
{
	int a=0; int b=0;
	cout<<"Ingrese los valores a multiplicar"<<endl;
	cout<<"A= ";cin>>a;
	cout<<"B= "; cin>>b;
	cout<<endl;
	cout<<"Resultado: "<<mult(a,b)<<endl;
}