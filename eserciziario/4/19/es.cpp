/*
Scrivere un programma che legge un array di interi positivi, lo scorre dall’inizio alla fine, e di tutti gli elementi che sono
ripetuti in sequenza contigua cancella tutte le occorrenze tranne una, trasformando le ripetizioni in elementi unici (vedi
esempi qui sotto).
Al ternine del procedimento, i valori che non sono stati eliminati devono essere contenuti in elementi consecutivi dello stesso
array, e gli elementi rimanenti devono essere azzerati. Il programma infine stampa tutti gli elementi non zero.

SENZA ARRAY DI APPOGGIO
*/

#include <iostream>

using namespace std;

const int DIM =7;

int main(){
	
	int v[DIM];

	
	for(int i=0; i<DIM; ++i)
		cin >> v[i];
	
	
	for(int i=0; i<DIM; ++i){
		for(int k=i+1; k<DIM; ++k){
			if(v[i]==0 || v[k]==0) break;
			else if(v[i]==v[k]){
				for(int j=k+1; j<DIM; ++j)
					v[j-1]=v[j];

				v[DIM-1]=0;
				k--;
			}
			else{
				i=k-1;
				break;
			}
		}
	}

	for(int i=0; i<DIM; ++i){
		cout << v[i] << "-";
	}


	return 0;
}
