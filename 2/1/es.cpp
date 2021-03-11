#include <iostream>

using namespace std;

int main(){

	char a, b;
	
	cout << "inserisci il primo carattere: ";
	cin >> a;
	cout << "inserisci il secondo carattere: ";
	cin >> b;

	if(a == b)
		cout << "Uguali";
	else
		cout << "Diversi";
	
	cout << endl;
	
	return 0;
}
