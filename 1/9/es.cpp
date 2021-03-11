//stampo area e perimetro di un triangolo dopo aver ricevuto i dati necessari

#include <iostream>

using namespace std;

int main(){

	float b, l2, l3, h;
	
	cout << "Inserisci la base: ";
	cin >> b;
	
	cout << "Inserisci il secondo lato: ";
	cin >> l2;
	
	cout << "Inserisci il terzo lato: ";
	cin >> l3;
	
	cout << "Inserisci l'altezza: ";
	cin >> h;

	float perimetro = b+l3+l2, 
				area = b*h/2;
	
	cout << "L'area vale: " << area << endl
			 << "Il perimetro vale: " << perimetro << endl;


	return 0;
}
