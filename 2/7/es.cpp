#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << boolalpha;
	const float TOL = 0.000001;
	long double a, i;
	
	cout << "Inserisci un numero reale: ";
	cin >> a;
	i = a;
	
	a /= 4.9;
	a /= 3.53;
	a /= 6.9998;
	
	a *= (4.9*3.53*6.9998);
	
	
	if(!(fabs(a-i)<TOL))
		cout << "moltiplicare NON è l ' inverso di dividere" << endl;
		
	/* NON COSÌ PERCHÈ NON SI USA == CIN I FLOATING POINT
	
	if(a!=i)
		cout << .. ;
	*/

	return 0;
}
