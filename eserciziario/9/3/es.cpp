#include <iostream>

using namespace std;

struct dynamic_array {
	int* store;
	unsigned int size;
};

void print_d_array(const dynamic_array& d) {
// definire un puntatore p e inizializzarlo con il campo array di d
	int *p = d.store;
	
// usando l ' aritmetica dei puntatori su p per visitare il campo store di d...
// ...stampare gli elementi del campo store di d, ...
// ...ciascuno seguito dal carattere ' \t '
// stampare una andata a capo
	for(int i =0; i<d.size; ++i)
		cout << d.store[i] << "\t\n";
}

void read_d_array(dynamic_array &d){

	// definire una variabile intera s a un valore negativo
	int s=-1;
	
	/* finché s non è strettamente positiva....
		// stampare "Inserisci la dimensione del vettore" e andare a capo
		// leggere s
	*/
	while(s<=0){
		cout << "Inserisci la dimensione del vettore: ";
		cin >> s;
	}
	
	// assegnare s al campo size di d
	d.size = s;
		
	// allocare s interi assegnando l ' area di memoria riservata al campo store di d
	d.store = new int[s];
		
	/* iterare s volte....
		// stampare "inserisci un valore"
		// leggere un valore nell ' i-esimo elemento del campo store di d...
		// ...usando la notazione con le quadre per accedervi
	*/
	for(int i=0; i<s; ++i){
		cout << "inserisci un valore: ";
		cin >> d.store[i];
	}
}




int main(){

 dynamic_array v;
 read_d_array(v);
 
 print_d_array(v);

}


