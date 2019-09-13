//Carlos Roberto Cortez Iraheta (00204119)
//Henry Alexander Cortez Amaya (00095119)

#include<iostream>
using namespace std;

int buscar(int a[],int x, int prim, int ult);

int main()
{
	int  n[8]={1,3,4,5,17,18,31,33};
	int x,i,prim=0, ult=7;
	
cout<<"Ingrese numero: "; cin>>x;
i= buscar(n,x,prim,ult);
if(i==-1)
 cout<<"No existe el numero :(\n";
else
 cout<<"Esta en la casilla: "<<i+1<<endl;
 
	return 0;		
}

int buscar(int a[],int x, int prim, int ult){
	int mitad;
	
if(prim>ult)
   return -1;
   
  mitad=(prim+ult)/2;

if(x==a[mitad])
  return mitad;
if(x<a[mitad])
 return buscar(a,x,prim,mitad-1);
else
 return buscar(a,x,mitad+1,ult);
	
	
	}