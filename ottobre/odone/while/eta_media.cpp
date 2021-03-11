// calcolo l età media della classe di IP
// non so quanti studenti ci sono in aula
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	
	int somma = 0;
	int contatore = 0;
	int eta = 0;
	
	//input e calcoli
	
	while(eta != -1){
		cout << "Inserisci un'età: ";
		cin >> eta;
		
		if(eta != -1){
			contatore++;
			somma += eta;
		}
	
	}
	
	float media;
	media = static_cast<float>(somma)/contatore;
	
	// stampo la media calcolata
	cout << setprecision(4) << "La media è: " << media << endl;

	return 0;
}
