/*
	programma che prende in input un array di "persone" e lo ordina decrescente per l'età
	

*/
#include <iostream>
#include <string>

using namespace std;

struct Date{
	unsigned int anno;
	unsigned short mese;
	unsigned short giorno;
};

struct Studente {
  string Cognome;
  string Nome;
  string matr;
  Date data;
  int voto;
  int eta;
};

const int DIM = 3;

int main(){

	Studente S[DIM];
	
	// input dei dati di ogni studente
	for(int i=0; i<DIM; ++i){
	
		// NOME
		cout << "Inserisci il nome del " << i+1 << "° studente:\t";
		cin >> S[i].Nome;
		
		// COGNOME
		cout << "Inserisci il cognome del " << i+1 << "° studente:   ";
		cin>>S[i].Cognome;
		
		// data di nascita
		cout << "Inserisci l anno di nascita: ";
		cin >> S[i].data.anno;
			
		cout << "Inserisci il mese di nascita: ";
		cin >> S[i].data.mese;
			
		cout << "Inserisci il giorno di nascita: ";
		cin >> S[i].data.giorno;
		
		//Matricola
		cout << "Inserisci la matricola con la s: ";
		cin >> S[i].matr;
		
		//voto medio
		cout << "Inserisci il voto medio: ";
		cin >> S[i].voto;
		
		//calcolo et sbagliato perchè dovrei usare orologio di sistema
		S[i].eta = 2020-S[i].data.anno;
		
	}
	
	
	//stampa nell ordine concui sono stati inseriti SOLO DEBUG
	for(int i=0; i<DIM; ++i)
		cout <<i+1<<": "<< S[i].eta << endl;
	
	cout << endl << endl << endl;

	// selection sort per ordine decrescente di età
	for(int i=0; i<DIM; ++i){
		
		int max_ind=i;
		
		for(int k=i+1; k<DIM; ++k){
			if(S[k].eta>S[max_ind].eta)
				max_ind=k;
		}
	
		if(max_ind!=i){
			Studente temp = S[i];
			S[i] = S[max_ind];
			S[max_ind] = temp;
		}
	}


	// output array ordinato
	cout << "L'ordine alfabetico è\n";
	for(int i=0; i<DIM; ++i){
		cout <<i+1<<": "<< S[i].eta << endl;
	}
	return 0;
}
