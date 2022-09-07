#include <iostream>
#include<math.h>

float n, soma;
using namespace std;

int main() {
	cout<<"Digite o numero n para ser realizada a serie"<<endl;
	cin>>n;
	soma=0;
		for(int i=0; i<n; i++){
			soma=((i+1)/(n-i)) +soma;
		}
	cout<<"O valor da serie para o numero"<<n<<" e igual a: "<<soma<<endl;
}
