#include <iostream>

using namespace std;

void replicate2_line(int, int, char, char);
void print_rombo_sup(int);

int main(){

	int d;
	cout << "inserisci un numero: ";
	cin >> d;
	
	print_rombo_sup(d);
}

void replicate2_line(int a, int b, char c , char d){
	
	for(int i=0; i<a; ++i)
		cout << c;
	for(int i=0; i<b; ++i)
		cout << d;
}

void print_rombo_sup(int num){
	
	int diag = 2*num+1;
	
	for(int i=0; i<num+1; ++i){
		replicate2_line(num-i, 2*i+1, ' ', '*');
		cout << endl;
	}
	
	for(int i=num-1; i>=0; --i){
		replicate2_line(num-i, 2*i+1, ' ', '*');
		cout << endl;
	}
}


