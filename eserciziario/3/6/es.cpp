/* stampo  un menu con le
scelte corrispondenti 
*/

#include <iostream>

using namespace std;

int main(){

/* ripetere
- stampare la stringa "1
Prima scelta"
- stampare la stringa "2 Seconda scelta" su una nuova riga
- stampare la stringa "3 Terza scelta" su una nuova riga
- stampare la stringa "0 Uscita dal programma" su una nuova riga
- stampare la stringa "Fai una scelta: " su una nuova riga
- dichiarare una variabile intera answer
- leggere answer
- Se il valore di answer è 1
-- scrivere il messaggio: "Hai fatto la prima scelta"
- Se il valore di answer è 2
-- scrivere il messaggio: "Hai fatto la seconda scelta"
- Se il valore di answer è 3
-- scrivere il messaggio: "Hai fatto la terza scelta"
19- Se il valore di answer è 0
-- scrivere il messaggio: "Hai scelto di uscire dal programma."
-- terminare l ' esecuzione.
- In tutti gli altri casi
-- scrivere il messaggio: "Scelta non valida"
finché answer è diverso da zero
*/
	int answer;
	
	do{
	cout << "1 Prima scelta" << endl;
	cout << "2 Seconda scelta" << endl;
	cout << "3 Seconda scelta" << endl;
	cout << "0 uscita dal programma" << endl;
	
	cout << "Fai una nuova scelta: ";
	
	cin >> answer;
	
	switch(answer){
		case 1:
			cout << "hai fatto la prima scelta";
			break;
		case 2:
			cout << "hai fatto la seconda scelta";
			break;
		case 3:
			cout << "hai fatto la terza scelta";
			break;
		case 0:
			cout << "hai scelto di uscire da programma" << endl;
			return 0;
		default:
			cout << "Scelta non valida";
		}
			
		cout << endl << endl;
	
	}while(answer!=0);	
	
	return 0;
}
