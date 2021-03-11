//inserisco ore(0-23) e minuti (0-59) e stampo minuti totali

#include <iostream>

using namespace std;

int main(){

	int ore, minuti;
	
	cout << "Inserisci le ore (0-23): ";
	cin >> ore;
	
	cout << "Inserisci i minuti (0-59): ";
	cin >> minuti;
	
	/* PRIMO MODO
	int tot = ore*60 + minuti;
	
	cout << "In totale sono: " << tot << " minuti" <<  endl;
	*/
	
	// SECONDO MODO
	minuti += ore*60;
	
	cout << "In totale sono: " << minuti << " minuti" <<  endl;

	return 0;
}
