// stampa la media dei umeri letti dall utente finchè non finisce

#include <iostream>

using namespace std;

int main(){

	int n;
	float sum=0;
	int cont=0;
	char ans = 'a';
	
	while(ans!='n'){
	
		cout << "Inserisci un numero: ";
		cin >> n;
		
		sum += n;
		cont++;
		
		cout << "vuoi continuare?(n=no, qualunque carattere=si): ";
		cin >> ans;
		cout << endl;
	
	}

	float media = sum/cont;
	cout << "La media è: " << media << endl;


	return 0;
}
