#include <iostream>

using namespace std;

int main(){

	int ore, min;
	
	cout << "Inserisci le ore(1 - 12) e i minuti(0 - 59) separati da uno spazio: ";
	cin >> ore >> min;
	
	if(ore < 1 || ore > 12 || min < 0 || min > 59){
		cout << "ERRORE: codice errore -1"<< endl;
		return 0; // oppure -1 se ha senso
	}
	
	switch(ore){
	
		case 1:
			cout << "è l'una";
			break;
			
		case 2:
			cout << "Sono le due";
			break;
			
		case 3:
			cout << "Sono le tre";
			break;
		
		case 4: 
			cout << "Sono le quattro";
			break;
		
		case 5:
			cout << "Sono le cinque";
			break;
			
		case 6:
			cout << "Sono le sei";
			break;
		
		case 7:
			cout << "Sono le sette";
			break;
			
		case 8:
			cout << "Sono le otto";
			break;
			
		case 9:
			cout << "Sono le nove";
			break;
			
		case 10:
			cout << "Sono le dieci";
			break;
			
		case 11:
			cout << "Sono le undici";
			break;
	
		case 12:
			cout << "Sono le dodici";
			break;
	
	}
	
	if(min >= 15 && min < 30)
		cout << " e un quarto";

	else if(min >= 30 && min < 45)
		cout << " e mezza";
		
	else if(min >= 45)
		cout << " e tre quarti";

	if(min%15 != 0)
		cout << " circa";

	cout << endl;


	return 0;
}
