#include <iostream>
#include <conio.h>
using namespace std;
int impar(int n);
int main(){
	int casos,rangomin,rangomax,i=1,n,r=0;
	cout<<"SUMA DE IMPARES DE UN RANGO: "<<endl<<"Ingrese el numero de casos: ";cin>>casos;
	for (i;i<=casos;i++){
		cout<<"Ingrese el rango inicial : ";cin>>rangomin;
		cout<<"Ingrese el rango final: ";cin>>rangomax;
		for(rangomin;rangomin<=rangomax;rangomin++){
			n=impar(rangomin);
			if(n!=0){
			r+=n;
			//cout<<n<<endl;
			}	
		}
		cout<<"Caso["<<i<<"]= "<<r<<endl;
		r=0;	
	}
	
	cout<<"Pulsa una tecla para continuar...";getch();
	return 0;
}

int impar(int n ){
	int n1;
	bool a;
	n1=n;
	n1%=2;
	if (n1!=0){
		return n;
	}	
}
