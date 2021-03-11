#include <iostream>

using namespace std;

int cifre(int);

int main(){

	int n=50;
	int j = cifre(abs(n));
	cout << n << " ha " << j << " cifre\n";
}

int cifre(int x){
	int cifre = 0; // locale alla funzione, quando esco non è più accessibile
	do{
		x/=10;
		cifre++;
	}while(x>0);
	
	return cifre;
}
