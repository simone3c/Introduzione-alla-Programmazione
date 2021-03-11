#include <iostream>
#include <string>

using namespace std;

char first_letter();

int main(){
	
	char c = first_letter();

	cout << "La lettera più piccola inserita è " << c << endl;
	
}

char first_letter(){
// stampare la stringa "Inserisci una lettera maiuscola "
	cout << "Inserisci una lettera maiuscola ";
	// dichiarare una variabile first di tipo char
	char first;
	/* ripetere
		- leggere first
	fintanto che first minore di ' A ' o maggiore di ' Z '
	*/
	do{
		cin >> first;	
	}while(first<'A' || first>'Z');
	// dichiarare una variabile c di tipo char inizializzata con ' Z '
	char c = 'Z';
	/* ripetere
		- se c è minore di first
			-- assegnare il valore di c a first
		- stampare la stringa: "Inserisci una lettera maiuscola (o altro carattere per terminare)"
		- leggere c
	finché c è maggiore o uguale ad ' A ' e minore o uguale a ' Z '
	*/
	do{
		if(c<first)
			first = c;
		cout << "Inserisci una lettera maiuscola (o altro carattere per terminare)";
		cin >> c;
		
	}while(c>='A' && c<='Z');
	// restituire il carattere first
	return first;
}






