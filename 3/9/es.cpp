// stampa il numero di cifre di un numero 

#include <iostream>

using namespace std;

int main(){

	int n;
	cout << "Inserisci un numero: ";
	cin >> n;
	
	int k = n;
	int cifre = 0;
	
	while(k>0){
	
		k /= 10;
		cifre++;
	
	}
	
	if(n==0)
		cout << "Il numero 0 ha 1 cifra" << endl;
	else
		cout << "Il numero " << n << " ha " << cifre << " cifre" << endl;


	return 0;
}
