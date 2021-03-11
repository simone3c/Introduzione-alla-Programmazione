#include <iostream>

using namespace std;

int main(){

	float a, b;
	
	cout << "Inserisci il primo numero: ";
	cin >> a;
	
	cout << "Inserisci il secondo numero: ";
	cin >> b;
	
	float media = (a+b)/2;
	
	float big = media + abs((a-b)/2);
	float small = media - abs((a-b)/2);
	
	cout << "Il grande è: " << big << " Il piccolo è: " << small << endl;
	

	return 0;
}
