#include <iostream>

using namespace std;

int main(){
	
	float a, b, c;
	
	cout << "Inserisci il primo numero: ";
	cin >> a;

	cout << "Inserisci il secondo numero: ";
	cin >> b;

	cout << "Inserisci il terzo numero: ";
	cin >> c;

	cout << "Hai inserito: " << a << " " << b << " " << c << endl;

	float temp;
	
	temp = a;
	a = b;
	b = c;
	c = temp;
	
	cout << "Invertiti verso sinistra sono: " << a << " " << b << " " << c << endl;
	
	return 0;
}
