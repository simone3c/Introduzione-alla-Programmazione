//stampo il fattoriale


#include <iostream>

using namespace std;

int main(){

// stampare la stringa "Inserire un numero positivo: "
	cout << "Inserire un numero positivo: ";
	
// dichiarare una variabile intera n
	int n;
	
// leggere n
	cin >> n;
	
// se n è minore di zero
// - stampare "Avevo detto positivo!"
// - uscire dal programma ritornando codice di errore 7
	if(n<0){
		cout << "Avevo detto positivo!";
		return 7;
	}

// dichiarare una variabile intera F inizializzata a n
	int F = n;
	
/* iterare su una variabile intera i inizializzata a n-1 e decrescente di 1...
... finché i è maggiore di 1
- assegnare a F il prodotto di F e i
*/
	for(int i=n-1; i>1; i--){
		F *= i;
	
	}
	
// se F è zero
//- stampare "Il fattoriale di 0 è 1"
// altrimenti
// stampare "Il fattoriale di " seguito da n, seguito da " è " seguito da F
	if(F==0)
		cout << "Il fattoriale di 0 è 1";
	else
		cout << "Il fattoriale di "<<n<<" è "<<F;
	cout << endl;

	return 0;
}
