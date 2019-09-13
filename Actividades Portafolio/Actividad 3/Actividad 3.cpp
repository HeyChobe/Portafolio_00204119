#include<iostream>

using namespace std;

int main(){
    int COLS=20;
    int a=0;
    
    int Matrix[10][20];
    
    Matrix[0][0]=100;
    cout<<"\n--Direcciones de Memoria--"<<endl<<endl;
    cout<<&Matrix[0][0]<<endl;
    cout<<&Matrix[2][1]<<endl;
    cout<<&Matrix[5][1]<<endl;
    cout<<&Matrix[1][10]<<endl;
    cout<<&Matrix[2][10]<<endl;
    cout<<&Matrix[5][3]<<endl;
    cout<<&Matrix[9][19]<<endl;
    
    //1. VALIDO
    Matrix[0][0]=*(*Matrix);
    cout<<"\nMatriz[0][0]: "<<Matrix[0][0]<<endl<<endl;
    
    //2. INVALIDO
     for(int i=0;i<10;i++){
         for(int j=0;j<20;j++){
         *((*(Matrix))+(i * COLS +j))=a;
         cout<<"["<<a<<"]";
         a++;
         }
     a=0;
     }
    cout<<"/n-----------------------"<<endl<<endl;
    cout<<endl<<endl;
    
    //3. VALIDO
     for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            *(*(Matrix+i)+j)=a;
            a++;
        }
     a=0;
     }
     for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            cout<<"["<<*(*(Matrix+i)+j)<<"]";
        }
         cout<<endl;
     }
    cout<<endl<<endl;
    cout<<"/n-----------------------"<<endl<<endl;
    
    
    //4. VALIDO
     for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            *(Matrix[i]+j)=a;
            a++;
        }
     a=0;
     }
     for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            cout<<"["<<*(Matrix[i]+j)<<"]";
        }
         cout<<endl;
     }
    cout<<endl<<endl;
    cout<<"/n-----------------------"<<endl<<endl;;
    
    //5. VALIDO
     for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            (*(Matrix+i))[j]=a;
            a++;
        }
     a=0;
     }
     for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            cout<<"["<<(*(Matrix+i))[j]<<"]";
        }
         cout<<endl;
     }
    
    
    return 0;
}
