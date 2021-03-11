/*
	programma che prende in input un array di "persone" e lo ordina in ordine 			 alfabetico dando priorità prima al cognome e poi al nome
	
	gruppo13
	
	29/10/20
*/
#include <iostream>
#include <string>

using namespace std;

struct Studente {
  string Cognome;
  string Nome;
};

const int DIM = 5;

int main(){

	Studente S[DIM];
	string nome_temp;
	string cognome_temp;
	
	// input dei dati di ogni studente
	for(int i=0; i<DIM; ++i){
	
		// NOME
		cout << "Inserisci il nome del " << i+1 << "° studente:\t";
		getline(cin, nome_temp);
		
		//eliminazione degli spazi vuoti ad inizio e fine stringa
		bool is_space=true;
		do{
		
			if(nome_temp[0]==' ')
				nome_temp.erase(0,1);
			else if(nome_temp[nome_temp.length()-1]==' ')
				nome_temp.erase(nome_temp.length()-1,1);
			else
				is_space = false;
		}while(is_space);
		
		// controllo sui caratteri per eventuale trasformazioni in lowercase
		// per permettere un controllo più facile
		int c=0;
		do{
			if(nome_temp[c]>=65 && nome_temp[c]<=90)
				nome_temp[c]+=32;
			++c;
		
		}while(c<nome_temp.length());
		
		S[i].Nome = nome_temp;
		
		// COGNOME
		cout << "Inserisci il cognome del " << i+1 << "° studente:   ";
		getline(cin, cognome_temp);
		
		//eliminazione degli spazi vuoti ad inizio e fine stringa
		is_space=true;
		do{
		
			if(cognome_temp[0]==' ')
				cognome_temp.erase(0,1);
			else if(cognome_temp[cognome_temp.length()-1]==' ')
				cognome_temp.erase(cognome_temp.length()-1,1);
			else
				is_space = false;
		}while(is_space);
		
		// controllo sui caratteri per eventuale trasformazioni in lowercase
		// per permettere un controllo più facile
		c=0;
		do{
		
			if(cognome_temp[c]>=65 && cognome_temp[c]<=90)
				cognome_temp[c]+=32;
			++c;
		}while(c<cognome_temp.length());
		
		S[i].Cognome = cognome_temp;
		cout << endl;
	}
	
	//stampa nell ordine concui sono stati inseriti SOLO DEBUG
	for(int i=0; i<DIM; ++i){
		cout <<i+1<<": "<< S[i].Cognome << " - " <<S[i].Nome;
		cout << endl;
	}
	cout << endl << endl << endl;

	// selection sort per ordine alfabetico con priorità cognome e poi nome
	for(int i=0; i<DIM; ++i){
		
		int smallest_ind=i;
		
		for(int k=i+1; k<DIM; ++k){
			if(S[k].Cognome<S[smallest_ind].Cognome)
				smallest_ind=k;

			else if(S[k].Cognome==S[smallest_ind].Cognome)
				if(S[k].Nome<S[smallest_ind].Nome)
					smallest_ind=k;
		}
	
		if(smallest_ind!=i){
			Studente temp = S[i];
			S[i] = S[smallest_ind];
			S[smallest_ind] = temp;
		}
	}
	// trasformazione del primo carattere in uppercase
	for(int i=0; i<DIM; ++i){
		S[i].Nome[0]-=32;
		S[i].Cognome[0]-=32;
	}

	// output array ordinato
	cout << "L'ordine alfabetico è\n";
	for(int i=0; i<DIM; ++i){
		cout <<i+1<<": "<< S[i].Cognome << " - " <<S[i].Nome;
		cout << endl;
	}
	return 0;
}
