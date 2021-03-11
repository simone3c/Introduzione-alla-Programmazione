// scambia due valori in mdoo sconosciuto

#include <iostream>

using namespace std;

int main(){

	int a=100;
	int b=5;
	
	a = a^b;
	b = a^b;
	a = a^b;
	
	cout << a << endl << b << endl;

	return 0;
}
