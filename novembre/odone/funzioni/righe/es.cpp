#include <iostream>

using namespace std;

void stampaRighe(int);

int main(){

	int n;
	cout << "Inserisci il n. di righe: ";
	cin >> n;
	
	stampaRighe(n);
}

void stampaRighe(int x){

	for(int i=0; i<x; ++i)
		cout << "********\n";

}
