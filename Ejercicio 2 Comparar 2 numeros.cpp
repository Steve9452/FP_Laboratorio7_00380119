#include<iostream>
#include<conio.h>
using namespace std;
int comparar(int n1,int n2);
int menor(int n1,int n2);
int main(){
	int i,casos,n1,n2;
	cout<<"COMPARADOR DE DOS NUMEROS "<<endl<<"Ingrese numero de casos ";cin>>casos;
	for(i=1;i<=casos;i++){
		cout<<"Ingrese primer numero ";cin>>n1;
		cout<<"Ingrese segundo numero ";cin>>n2;
		if(n1==n2){
			cout<<n1<<" es igual a "<<n2<<endl;
		}
		else if(comparar(n1,n2)==1){
			cout<<n1<<" es mayor a "<<n2<<endl;
			
		}
		else{
			cout<<n1<<" es menor a "<<n2<<endl;
		}
	}	
	cout<<"Pulse una tecla para continuar...";getch();
	return 0;
}
int comparar(int n1,int n2){
	if(n1>n2){
		return 1;
	}
	else{
		return 0;
		
	}
}
int menor(int n1, int n2){
	if(n1<n2){
		return n1;
	}
	else{
		return n2;
	}
	
	
}
