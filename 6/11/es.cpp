/*

	lettura finche non dice no e poi media

*/

#include <iostream>
#include <string>

using namespace std;

float media();

int main(){

	float m = media();

	cout << "La media è: " << m << endl;
	
}

float media(){

	int n;
	char ans='s';
	int sum=0;
	int c=0;
	do{
		cout << "Inserisci un numero: ";
		cin >> n;
		sum += n;
		c++;
		cout << "n per uscire, altri caratteri per continuare: ";
		cin >> ans;
	
	}while(ans!='n');
	
	return static_cast<float>(sum)/c;
}






