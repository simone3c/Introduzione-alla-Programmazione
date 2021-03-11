/*
	conversione.cpp
	
	converte l altezza da centimetri a piedi
				
*/

#include <iostream>

using namespace std;

int main(){
	
	/* PRIMA VERSIONE
	//leggere da tastiera l'altezza
	cout << "Inserisci altezza in centimetri: ";
	int cm;
	cin >> cm;
	
	//calcolo
	const float cm_to_ft = 0.0328;
	float ft = cm * cm_to_ft;
	
	//stampa del risultato
  cout << "L'altezza in piedi è: " << ft << endl;
	*/

	//leggere da tastiera l'altezza
	cout << "Inserisci altezza in centimetri: ";
	int cm;
	cin >> cm;
	
	//calcolo
	const float cm_to_ft = 0.0328;
	float ft = cm * cm_to_ft;
	int parte_intera, parte_dec;
	
	parte_intera = static_cast<int>(ft); //parte intera di ft
	parte_dec = static_cast<int>((ft-parte_intera+0.05)*12); //parte dec di ft
	
	
	//stampa del risultato
	cout << "L'altezza in piedi è: " << ft << endl;
	cout << "L'altezza è " << parte_intera << " piedi e " << parte_dec << endl;
		
	
	
	return 0;
}
