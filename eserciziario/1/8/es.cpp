//Ricevo in input l anno di nascita e stampo l'età

#include <iostream>

using namespace std;

int main(){

	int a;
	
	cout << "Quando sei nato? (anno): ";
	cin >> a;
	
	int eta = 2020 - a;
	
	cout << "Hai " << eta << " anni" << endl;

	return 0;
}
