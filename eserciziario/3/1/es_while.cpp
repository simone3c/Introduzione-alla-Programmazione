#include <iostream>

using namespace std;

int main(){

	// stampare la stringa 
	cout <<"Di quanti numeri vuoi fare la media? ";
	// dichiarare una variabile how_many di tipo int
	int how_many;
	// leggere how_many
	cin >> how_many;
	// se how_many non è strettamente positivo
	// - stampare "Errore: il numero doveva essere positivo"
	// - uscire dal main ritornando il codice di errore 42
	if(how_many<=0){
		cout << "Errore: il numero doveva essere positivo";
		return 42;
	}
	
	// dichiarare una variabile sum di tipo float inizializzata a 0
	float sum = 0;
	
	/* iterare how_many volte le seguenti istruzioni
	- stampare un a capo seguito dalla stringa "Inserisci un numero "
	- dichiarare una variabile x di tipo float
	- leggere x
	- assegnare a sum la somma di sum e x
	*/
	int i = 0;
	while(i<how_many){
		cout << "\nInserisci un numero: ";
		float x;
		cin >> x;
		
		sum += x;
		
		i++;
	}
	
	// stampare un a capo seguito dalla stringa "La media è "
	cout << "\nLa media è: " << sum/how_many << endl;
	// stampare la divisione di sum per how_many


	return 0;
}
