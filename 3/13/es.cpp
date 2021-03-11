// menu con colori come scelta e gestione degli errori

#include <iostream>

using namespace std;

int main(){

	char choice;
	
	do{
		cout << "Qual è il tuo colore preferito?";
		cout << "\n\trosso\n\tverde\n\tgiallo\n\tarancione\n\tnero\n\tbianco\n";
		
		cout << "Inserisci l'iniziale maiuscola o minuscola(1 per uscire): ";
		cin >> choice;
	
		if(choice=='r' || choice=='R'){
			cout << "ROSSO" << endl;
		}
		else if(choice=='v' || choice=='V'){
			cout << "VERDE" << endl;
		}
		else if(choice=='g' || choice=='G'){
			cout << "GIALLO" << endl;
		}
		else if(choice=='a' || choice=='A'){
			cout << "ARANCIONE" << endl;
		}
		else if(choice=='n' || choice=='N'){
			cout << "NERO" << endl;
		}
		else if(choice=='b' || choice=='B'){
			cout << "BIANCO" << endl;
		}
		else if(choice == '1'){
			cout << "USCITA" << endl;
		}
		else
			cout << "ERRORE, riprova" << endl;
	
	
	
	}while(choice!='1');

	return 0;
}
