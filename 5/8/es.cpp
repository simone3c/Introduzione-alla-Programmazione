/*

	rappresentazione di un numero complesso
	
*/

#include <iostream>
#include <cmath>
using namespace std;

const double TOLL = 0.00001;

struct Complex{
	double re;
	double im;
	
	double mod;
	double arg;
};

int main(){

	Complex z, w;
	
	cout << "Inserisci la parte reale di z: ";
	cin >> z.re;
	
	cout << "Inserisci la parte immaginaria di z: ";
	cin >> z.im;
		
	z.mod = sqrt(pow(z.re, 2) + pow(z.im, 2));
	z.arg = atan(z.im/z.re);
	
	cout << "Inserisci la parte reale di w: ";
	cin >> w.re;
	
	cout << "Inserisci la parte immaginaria di w: ";
	cin >> w.im;
		
	w.mod = sqrt(pow(w.re, 2) + pow(w.im, 2));
	w.arg = atan(w.im/w.re);
	
	cout << "z= " << z.re << " + " << z.im << "i  =  " << z.mod << " * e^" << z.arg << "i" << endl;
	
	cout << "w= " << w.re << " + " << w.im << "i  =  " << w.mod << " * e^" << w.arg << "i" << endl;
	
	//somma
	
	Complex somma;
	somma.re = z.re + w.re;
	somma.im = z.im + w.im;
	
	somma.mod = z.mod+w.mod;
	somma.arg = atan(somma.im/somma.re);
	
	cout << "somma= " << somma.re << " + " << somma.im << "i  =  " << somma.mod << " * e^" << somma.arg << "i" << endl;
	
	
	
	return 0;
}

