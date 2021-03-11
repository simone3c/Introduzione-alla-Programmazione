#include <iostream>

using namespace std;

int main(){

	int a;
	cout << "Inserisci un numero: ";
	cin >> a;
	
	if(a%13 == 0)
		cout << "Divisibile";
	else
		cout << "Non divisibile";
		
	cout << endl;


	return 0;
}
