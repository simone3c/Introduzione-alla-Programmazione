//stampa l area di un rett. dopo aver ottenuro in input i dati necessari

#include <iostream>

using namespace std;

int main(){

	float b, h;
	
	cout << "Inserisci la base: ";
	cin >> b;
	cout << "Inserisci l'altezza ";
	cin >> h;
	
	float area = b*h;
	
	cout << "L'area vale: " << area << endl;

	return 0;
}
