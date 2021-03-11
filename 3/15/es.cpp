// indovinare la radice quadrata
#include <iostream>
#include <cmath>
using namespace std;

int main(){

	float n;
	
	cout << "Inserisci un numero: ";
	cin >> n;
	
	float ans=-1;
	while(ans!=sqrt(n)){
		
		cout << "Indovina la radice: ";
		cin >> ans;
		
		if(ans!=sqrt(n))
			cout << "ERRRE, riprova" << endl;
	}
	
	cout << "\nComplimenti, la radice era proprio " << ans << endl;


	return 0;
}
