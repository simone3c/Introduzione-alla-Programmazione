#include <iostream>
#include <string>

using namespace std;

int fact(int);

int main(){
	
	int x;
	
	cout << "Scrivi un numero: ";
	cin >> x;
	
	int n = fact(x);

	cout << "Il fattoriale è: " << n << endl;
	
}

int fact(int n){

	int f=1;
	for(int i=2; i<=n; ++i)
		f *= i;

	return f;
}






