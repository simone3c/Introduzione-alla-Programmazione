// leggo due caratteri, li inverto, e li stampo prima e dopo l'inversione

#include <iostream>

using namespace std;

int main(){

	char a, b;
	
	cout << "Inserisci il primo carattere: ";
	cin >> a;
	
	cout << "Inserisci il secondo carattere: ";
	cin >> b;	

	cout << "prima dello scambio: c1=" << a << " c2=" << b << endl;
	
	char temp;
	
	temp = a;
	a = b;
	b = temp;

	cout << "dopo lo scambio: c1=" << a << " c2=" << b << endl;
	
	return 0;
}
