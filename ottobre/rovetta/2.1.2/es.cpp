// leggo tre numeri e li ordino e stampo in ordine crescente

#include <iostream>

using namespace std;

int main(){
	
	int a, b, c;
	
	cout << "Inserisci il primo numero: ";
	cin >> a;
	cout << "Inserisci il secondo numero: ";
	cin >> b;cout << "Inserisci il terzo numero: ";
	cin >> c;
	
	int aux;
	
	if(a>b){
		aux = a;
		a = b;
		b = aux;
	}
	
	if(a>c){
		aux = a;
		a = c;
		c = aux;
	}
	
	if(b>c){
		aux = c;
		c = b;
		b = aux;
	}

	cout << "I numeri inseriti in ordine crescente sono: " << a << "<" << b << "<" << c << endl;


	return 0;
}
