/*

ricerca di un elemento in una sequenza

2 ALGORITMI:
	-ricerca sequenziale(più generale)
	-ricerca binaria(più efficente; solo in sequenze ordinate con ordine noto)ALTRO FILE
*/

#include <iostream>

using namespace std;

const unsigned int DIM = 10;

int main(){

//RICERCA SEQUENZIALE
		
		//input 
		int s[DIM];
		int x;
		
		cout << "Inserisci " << DIM << " valori: ";
		
		for(int i=0; i<DIM; ++i)
			cin >> s[i];
		
		cout << "Inserisci un numero da cercare: ";
		cin >> x;
		
		//ricerca
		bool trovato=false;
		/*for(int i=0;i<DIM;++i){
			if(v[i]==x){
				trovato = true;
				break;
			}
		}*/
		
		int i=0;
		int ind;
		while(!trovato && i<DIM){
			if(s[i]==x){
				trovato=true;
				ind=i;
			}
			++i;
		
		}
				
		//output
		if(trovato) cout<< "TROVATO in posizione: " << ind+1 <<endl;
		else cout << "NON TROVATO"<<endl;

	return 0;
}
