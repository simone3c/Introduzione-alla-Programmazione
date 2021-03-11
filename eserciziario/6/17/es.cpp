/*

	stampa se il secondo è la radice del primo

*/

#include <iostream>
#include <cmath>

using namespace std;

bool fun(double, double);

const double TOLL = 0.00001;

int main(){
	
	double x, y;
	
	cout << "Scrivi un numero: ";
	cin >> x;
	
	cout << "Scrivi la radice: ";
	cin >> y;
	
	bool n = fun(x, y);

	cout << boolalpha << "Il risulatato dell espressione è: " << n << endl;
	
}

bool fun(double x, double sqrt_x){
	
	return (fabs(pow(sqrt_x, 2)-x)<TOLL);
}






