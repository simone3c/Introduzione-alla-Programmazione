#include <iostream>

using namespace std;

int main(){
	
	float a,b,c;
	float tmp;
	
	cout << "Inserisci a, b, c: ";
	cin >> a >> b >> c;
	
	if(a<b){
		tmp = a;
		a = b;
		b = tmp;	
	}

	if(a<c){
		tmp = a;
		a = c;
		c = tmp;
	}

	if(b<c){
		tmp = b;
		b = c;
		c = tmp;
	}

	cout << a << "<" << b << "<" << c << endl;

	return 0;
}
