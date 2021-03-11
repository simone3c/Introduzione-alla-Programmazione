/*

ricerca di un elemento in una sequenza
con ricerca binaria
nel caso la sequenza sia ordinata

input-> seq. di dati in modo crescente
*/

#include <iostream>

using namespace std;

const unsigned int DIM = 5;

int main(){

//RICERCA BINARIA o BINARY SEARCH
		
		//input 
		int s[DIM];
		int x;
		
		cout << "Inserisci " << DIM << " valori in ordine crescente: ";
		
		for(int i=0; i<DIM; ++i)
			cin >> s[i];
		
		cout << "Inserisci un numero da cercare: ";
		cin >> x;
		
		//ricerca binaria
		
		/*
			es  1 2 3 4 5 6 7 8 9 10
			devo trovare 3
			
					1 2 3 4 5		 	6 7 8 9 10
			considero elemento centrale 5
					1 2 3 4      5		 	6 7 8 9 10
			confronto quello che devi trovare con 5; se è x<5 x è in 1 2 3 4  
			altrimenti x è in	6 7 8 9 10
			
			x<5
					1 2 3 4
					1 2 				3 4
			considero elemento centrale 2
					1      2 	 	3 4
			rifaccio quello che ho fatto prima finchè non lo trovo

		*/
		//questi sono indici che individuano primo, ultimo, e mediano di ogni sequenza
		int first=0;
		int last=DIM-1;
		int mid=(first+last)/2;
		bool trovato=false;
		
		while(!trovato && last>first){
			if(s[mid]==x)
				trovato = true;
			else if(x<s[mid])//allora l elemento è prima di mid
				last=mid-1;
			else//x è dopo s[mid]
				first=mid+1;
				
			mid=(first+last)/2;
		
		}
			
		
		//output
		if(trovato) cout<< "TROVATO"<<endl;
		else cout << "NON TROVATO"<<endl;

	return 0;
}
