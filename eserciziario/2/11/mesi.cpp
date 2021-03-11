#include <iostream>

using namespace std;

int main(){

	int mese;
	
	cout << "Inserisci un numero da 1 a 12: ";
	cin >> mese;
	
	switch (mese){
	
	case 1:
		cout << "\nIl mese è Gennaio\n";
		break;
	
	case 2:
		cout << "\nIl mese è Febbraio\n";
		break;
		
	case 3:
		cout << "\nIl mese è Marzo\n";
		break;
		
	case 4:
		cout << "\nIl mese è Aprile\n";
		break;
		
	case 5:
		cout << "\nIl mese è Maggio\n";
		break;
		
	case 6:
		cout << "\nIl mese è Giugno\n";
		break;
		
	case 7:
		cout << "\nIl mese è Luglio\n";
		break;
		
	case 8:
		cout << "\nIl mese è Agosto\n";
		break;
		
	case 9:
		cout << "\nIl mese è Settembre\n";
		break;
		
	case 10:
		cout << "\nIl mese è Ottobre\n";
		break;
		
	case 11:
		cout << "\nIl mese è Novembre\n";
		break;
		
	case 12:
		cout << "\nIl mese è Dicembre\n";
		break;
	
	default:
		cout << "\nNumero sbagliato!\n";
		break;
	}

	return 0;
}
