//Carlos Roberto Cortez Iraheta
//00204119
#include <iostream>
#include <string>
using namespace std;

//Estructura que permite inicializar datos del continente
struct info_Pais{
    string Nombre;
    string Capital;
    int Poblacion;
    int Prom;
};

//Estructura que permite inicializar los continentes y su nombre
struct Continente{
    string Nombre;
    struct info_Pais Info[5];
}Continentes[5];

//Funcion que ingresa los datos
void datos(){
    
    for(int i=0; i<5; i++){
        cout<<"INGRESE EL CONTINENTE: "<<endl;
        cout<<"---> ";
        getline(cin,Continentes[i].Nombre);
        cout<<endl<<endl;
        for(int j=0; j<5; j++){
            cout<<"Ingrese el pais: ";
            getline(cin,Continentes[i].Info[j].Nombre);cout<<endl;
            cout<<"Ingrese su capital: ";
            getline(cin,Continentes[i].Info[j].Capital);cout<<endl;
            cout<<"Ingrese su poblacion: ";
            cin>>Continentes[i].Info[j].Poblacion;cout<<endl;
            cin.ignore();
            cout<<"Ingrese el promedio de edad: ";
            cin>>Continentes[i].Info[j].Prom;cout<<endl;
            cin.ignore();
            cout<<endl;
        }
    }
    
    //Muestro los datos ingresados para corrobar el resultado de los algoritmos que detectan la poblacion mayor y su capital
    for(int i=0; i<5; i++){
        cout<<"\n---- CONTINENTE ----"<<endl<<Continentes[i].Nombre<<endl<<endl;
        for(int j=0; j<5; j++){
            cout<<"Pais: "<<Continentes[i].Info[j].Nombre<<endl;
            cout<<"Capital: "<<Continentes[i].Info[j].Capital<<endl;
            cout<<"Poblacion: "<<Continentes[i].Info[j].Poblacion<<endl;
            cout<<"Promedio de edad: "<<Continentes[i].Info[j].Prom<<endl;
            cout<<endl;
        }
    }
}

//Funcion para saber cual la poblacion total por continente
void prom_P(int Pob1=0,int Pob2=0,int Pob3=0,int Pob4=0,int Pob5=0){
    
    Pob1=(Continentes[0].Info[0].Poblacion)+(Continentes[0].Info[1].Poblacion)+(Continentes[0].Info[2].Poblacion)+(Continentes[0].Info[3].Poblacion)+(Continentes[0].Info[4].Poblacion);
    
    Pob2=(Continentes[1].Info[0].Poblacion)+(Continentes[1].Info[1].Poblacion)+(Continentes[1].Info[2].Poblacion)+(Continentes[1].Info[3].Poblacion)+(Continentes[1].Info[4].Poblacion);
    
    Pob3=(Continentes[2].Info[0].Poblacion)+(Continentes[2].Info[1].Poblacion)+(Continentes[2].Info[2].Poblacion)+(Continentes[2].Info[3].Poblacion)+(Continentes[2].Info[4].Poblacion);
    
    Pob4=(Continentes[3].Info[0].Poblacion)+(Continentes[3].Info[1].Poblacion)+(Continentes[3].Info[2].Poblacion)+(Continentes[3].Info[3].Poblacion)+(Continentes[3].Info[4].Poblacion);

    Pob5=(Continentes[4].Info[0].Poblacion)+(Continentes[4].Info[1].Poblacion)+(Continentes[4].Info[2].Poblacion)+(Continentes[4].Info[3].Poblacion)+(Continentes[4].Info[4].Poblacion);
    
    cout<<"----"<<"POBLACION DE LOS CONTINENTES"<<"----"<<endl<<endl;
    cout<<"Continente "<<Continentes[0].Nombre<<": "<<Pob1<<" habitantes"<<endl;
    cout<<"Continente "<<Continentes[1].Nombre<<": "<<Pob2<<" habitantes"<<endl;
    cout<<"Continente "<<Continentes[2].Nombre<<": "<<Pob3<<" habitantes"<<endl;
    cout<<"Continente "<<Continentes[3].Nombre<<": "<<Pob4<<" habitantes"<<endl;
    cout<<"Continente "<<Continentes[4].Nombre<<": "<<Pob5<<" habitantes"<<endl;
    cout<<endl;
}
    
//Funcion que detecta que capital tiene mayor poblacion
void cap_P(){
    
    int cont=0, pob[25], mayor=0;
    string Capital;
    
    //Me detecta el valor de la mayor pobacion
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            pob[cont]=Continentes[i].Info[j].Poblacion;
            
            if(pob[cont]>mayor){
                mayor=pob[cont];
            }
            cont++;
        }
    }
    
    //Me detecta segun el valor de la poblacion mayor, el nombre de la capital a la que pertenece
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(mayor==Continentes[i].Info[j].Poblacion){
                Capital=Continentes[i].Info[j].Capital;
            }
        }
    }
    
    cout<<"----"<<"CAPITAL CON MAYOR POBLACION"<<"----"<<endl<<endl;
    cout<<Capital<<": "<<mayor<<" habitantes"<<endl<<endl;
}

int main(){
    
    datos();
    prom_P();
    cap_P();
    
    return 0;
}
