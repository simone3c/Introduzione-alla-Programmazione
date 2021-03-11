//stampo la media di due valori letti
#include <iostream>

using namespace std;

int main(){
	
	int a, b;
	
	cout << "Inserisci il primo numero: ";
	cin >> a;
	
	cout << "Inserisci il secondo numero: ";
	cin >> b;
	
	cout << "La media vale: " << static_cast<float>((a+b))/2 << endl;
	
	

	return 0;
}
