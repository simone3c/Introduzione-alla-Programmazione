//l utente deve indovinare un numero casuale
//generato dal programma stesso

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int MAX = 100;

const bool debug = true; // se true eseguo le istruzioni per il debug
int main(){
	
	//generazione numero pseudo-casuale
	int num;
	
	int seed=static_cast<int>(time(NULL));
	srand(seed); //numero casuale generato tramite l orologio
	
	num = rand()%(MAX+1); //rand() genera valori tra 0 a RAND_MAX definita in cstdlib
	
	if(debug)
		cout << num << endl;
	
	//indovinare numero
	int ans;
	
	do{
	cout << "Inserisci un numero tra 0 e "<<MAX<<": ";
	cin >> ans;
	
	//verifica risposta
	if(ans<num)
		cout << "il numero inserito è troppo piccolo: " << endl;
	else if(ans>num)
		cout << "il numero inserito è troppo grande: " << endl;
	
	}while(ans!=num);
	
	cout << "Bravo" << endl;

	return 0;
}
