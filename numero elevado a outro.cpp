#include <iostream>
#include<math.h>

int x, n, a;
char r;
using namespace std;
int main(){
	do{
	cout<<"Digite o numero:"<<endl;
		cin>>x;
	cout<<"A que potencia deve ser elevado esse numero?"<<endl;
		cin>>n;
		a=1;
	for(int i=0; i<n; i++){
			a=a*x;
		}
	cout<<"O valor de"<<x<<" elevado a"<<n<<" e igual a:"<<a<<endl;
	cout<<"Voce deseja continuar? Caso nao queira, digite N. Caso queira, digite qualquer outra tecla"<<endl;
	cin>>r;
	}while(r!='n'&& r!='N');
}


