#include <iostream>

using namespace std;

int main(){
	
	//voglio acquisire da tastiera un carettere e
	//voglio capire cosa succede se lo "trasformo" in int


	cout << "Inserisci un carattere alfabetico: ";
	
	char c;
	cin >> c;
	
	int i = c; //cast implicito safe
	int k = static_cast<int>(c); //cast esplicito safe
	
	cout << "Il carattere inserito è: " << c << endl
	     << "Il carattere convertito è: " << i << endl
		 << "Con static_cast viene fuori: " << k << endl;
		 
	cout << "la posizione del carattere a è: " <<
	static_cast<int>('a') << endl;
	cout << "La posizione del carattere z è: " << 
	static_cast<int>('z') << endl; 
	
	cout << "Il mio carattere dista da a " << k - static_cast<int>('a') << " posizioni" << endl
		 << "Facendo '" << c << " - a' " << "viene fuori: " << c - 'a'  << endl;
	
	return 0;
}
