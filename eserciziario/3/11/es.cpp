// stampa un trap. rettangolo con basi i numeri inseriti e h=abs(b-B)+1

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int b1; 
	int b2; 
	int h;
	
	cout << "Inserisci un numero: ";
	cin >> b1;
	
	cout << "Inserisci un altro numero: ";
	cin >> b2;
	
	h = abs(b1-b2)+1;
	
	for(int i=0; i<h; i++){
	
		if(b1>b2)
			for(int k=b1-i; k>0; k--)
				cout << "x";

		else
			for(int k=b1+i; k>0; k--)
				cout << "x";
		
		cout << endl;
	}

	return 0;
}
