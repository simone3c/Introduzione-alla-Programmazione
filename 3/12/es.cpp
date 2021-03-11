// stampa un rombo di * con diag di 2n+1 * dove n è inserito dall utente

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int n;
	int diag;
	cout << "Inserisci un numero: ";
	cin >> n;
	
	diag = 2*n+1;
	
	//ciclo per la parte superiore del rombo
	for(int i=0; i<n; i++){
		for(int k=0; k<(diag-(2*i+1))/2; k++)
			cout << " ";
		
		for(int k=0; k<2*i+1; k++)
			cout << "*";
			
		for(int k=0; k<(diag-(2*i+1))/2; k++)
			cout << " ";
		
		cout << endl;
	}
	
	// ciclo per la riga centrale più lunga
	for(int i=0; i<diag; i++)
		cout << "*";
		
	cout << endl;
	
	//ciclo per la parte inferiore del rombo
	for(int i=n-1; i>=0; i--){
		for(int k=0; k<(diag-(2*i+1))/2; k++)
			cout << " ";
		
		for(int k=0; k<2*i+1; k++)
			cout << "*";
			
		for(int k=0; k<(diag-(2*i+1))/2; k++)
			cout << " ";
		
		cout << endl;
	}

	return 0;
}
