#include <iostream>

using namespace std;

int main(){

	float a, b, c;
	
	cout << "Inserisci il primo lato: ";
	cin >> a;

	cout << "Inserisci il secondo lato: ";
	cin >> b;

	cout << "Inserisci il terzo lato: ";
	cin >> c;

	if(a == 0 || b==0 || c==0)
		cout << "NO";
	else if((a>(b+c))||(b>(a+c))||(c>(b+a))||(a<abs(b-c))||(b<abs(c-a))||(c<abs(a-b)))
		cout << "NO";
	else
		cout << "SI";

	cout <<  endl;


	return 0;
}
