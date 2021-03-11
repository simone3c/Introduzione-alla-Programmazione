/*
	approx.cpp

	espressioni logiche e floating point

*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){

	float f = 3.0/7 + 2.0/7 + 2.0/7;
	double d = 3.0/7 + 2.0/7 + 2.0/7;

	// INSERISCO UNA TOLLERANZA
	const int TOLL = 0.00000000000001;
	
	// NON FARE MAI == con floating point cout << boolalpha << (f==1.0) << endl << (d==1.0) << endl;
	

	cout << boolalpha << (fabs(f-1.0) < TOLL) << endl;
	cout << boolalpha << (fabs(d-1.0) < TOLL) << endl;
	return 0;
}
