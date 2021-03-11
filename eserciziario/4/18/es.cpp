/*
Scrivere un programma che legge un array di interi positivi, lo scorre dall’inizio alla fine, e di tutti gli elementi che sono
ripetuti in sequenza contigua cancella tutte le occorrenze tranne una, trasformando le ripetizioni in elementi unici (vedi
esempi qui sotto).
Al ternine del procedimento, i valori che non sono stati eliminati devono essere contenuti in elementi consecutivi dello stesso
array, e gli elementi rimanenti devono essere azzerati. Il programma infine stampa tutti gli elementi non zero.

*/

#include <iostream>

using namespace std;

const int DIM =7;

int main(){
	
	int v[DIM];
	int aux[DIM];
	
	for(int i=0; i<DIM; ++i){
		cin >> v[i];
		aux[i]=0;
	}
	
	
	int ind_aux=0;
	for(int i=0; i<DIM; ++i){
		aux[ind_aux]=v[i];
		
		for(int k=i+1; k<DIM; ++k){
			if(v[i]!=v[k]){
				i=k-1;
				ind_aux++;
				break;
			}
		}
	}

	for(int i=0; i<DIM; ++i){
		cout << v[i] << "-";
	}
	cout << endl;
	for(int i=0; i<DIM; ++i){
		cout << aux[i] << "-";
	}

	return 0;
}
