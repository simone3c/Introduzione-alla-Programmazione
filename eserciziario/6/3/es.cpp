#include <iostream>
#include <string>

using namespace std;

float media(int);

int main(){

	int n;
	cout << "Quanti numeri vuoi? ";
	cin >> n;
	
	cout << "La media è " << media(n) << endl;
	
	return 0;
}

float media(int x){

	float sum = 0;
	for(int i=0; i<x; ++i){
		float k;
		cout << "Inserisci un numero: ";
		cin >> k;
		sum += k;
	}
	return sum/x;
}








