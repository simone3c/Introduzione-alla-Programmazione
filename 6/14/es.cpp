#include <iostream>

using namespace std;

void replicate2_line(int, int, char, char);

int main(){

	int a;
	int b;
	char c; 
	char d;

	cout << "Inserisci 2 numeri interi: ";
	cin >> a >> b;
	
	cout << "Inserisci due caratteri: ";
	cin >> c >> d;
	
	replicate2_line(a, b, c, d);
	
}


void replicate2_line(int a, int b, char c , char d){
	
	for(int i=0; i<a; ++i)
		cout << c;
	for(int i=0; i<b; ++i)
		cout << d;
}
