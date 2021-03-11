/*

	stampa il numero di cifre di un numero

*/

#include <iostream>
#include <string>

using namespace std;

int cifre(int);

int main(){
	
	int x;
	
	cout << "Scrivi un numero: ";
	cin >> x;
	
	int n = cifre(x);

	cout << "Il n. di cifre è: " << n << endl;
	
}

int cifre(int k){
	int c=0;
	do{
		
		k/=10;
		c++;
		
	}while(k>0);

	return c;
}






