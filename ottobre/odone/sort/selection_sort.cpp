/*
	gli algoritmi di sort vogliono ordinare 
	una sequenza di elementi e ordinarli
	in un certo ordine senza l'appoggio
	di un altro array(ORDINAMENTO IN PLACE)
	
	SELECTION SORT:
	
	
	
*/

#include <iostream>

using namespace std;

const int DIM=10;

int main(){

	int v[DIM];
	
	cout << "Inserisci " << DIM << " elem: ";
	for(int i=0; i<DIM; ++i)
		cin >> v[i];
		
	int min;	
	for(int i=0; i<DIM; ++i){
		min = i;
		for(int k=i+1; k<DIM; ++k)
			if(v[k]<v[min])
				min = k;
				
		//swap
		int temp=v[i];
		v[i]=v[min];
		v[min]=temp;
	}
	
	for(int i=0; i<DIM; ++i){
		cout << v[i] << " ";
		
	}

	cout << endl;
	return 0;
}
