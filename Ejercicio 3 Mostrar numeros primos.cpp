#include<iostream>
#include<conio.h>
using namespace std;
int contadorprimo(int n);


int main(){
	int casos,nMin,nMax;
	cout<<"NUMEROS PRIMOS DE UN RANGO :"<<endl;//"Ingrese el numero de casos: ";
//	cin>>casos;
//	for(int i=1;i<=casos;i++){
		cout<<"Ingrese el inicio del rango: ";cin>>nMin;
		cout<<"Ingrese el final del rango: ";cin>>nMax;
//		cout<<"Caso ["<<i<<"]:"<<endl;
		for(nMin;nMin<=nMax;nMin++){
		if(contadorprimo(nMin)!=0){
		cout<<contadorprimo(nMin)<<endl;
		}
		}
//	}
	cout<<"Pulse cualquier tecla para continuar...";getch();
	return 0;
}
int contadorprimo(int n){
	int cuentadivisores=0;
	float nprimo;
		for(int i=1;i<=n;i++){
			nprimo=n%i;
			if(nprimo==0){
			cuentadivisores++;
			}
		}
		if(cuentadivisores>2){
			return false;
		}
		else{
			return n;			
		}
}
