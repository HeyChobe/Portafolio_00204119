Algoritmo: Obtenga un elemento que se encuentra en el fondo de la pila

while(!empty(s)){
	i=pop(s);
}

cout<<"El ultimo elemento de la pila es"<<i<<endl;


Algoritmo: Obtenga el segundo elemento de la pila, de arriba (TOP) hacia abajo , dejando la pila intacta

if(!empty(s) && s.tamanio>=2){
	i=pop(s);
	j=stackpop(s);
	push(s,i);
}

else{
	cout<<"ERROR";
	}

cout<<"El segundo elemento es "<<j<<endl;
