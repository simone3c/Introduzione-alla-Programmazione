#include <iostream>

using namespace std;

bool div(float, float, float);

int main(){

	float a, b, c;
	cout << "Inserisci tre numeri floating point: ";
	cin >> a >> b >> c;
	
	cout << boolalpha << "Il confronto è " << div(a, b, c) << endl;
	
}


bool div(float a, float b, float c){
	
	return ((a*b*c/(a*b*c)) == 1);
}
