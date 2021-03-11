#include <iostream>

using namespace std;

int fib(const int& n){

	if(n<0){
		string s="numero non valido!\n";
		throw s;
	}
	
	if(n==1 || n==0) return 1;
	
	return fib(n-1)+fib(n-2);
	
	
	
}


int main(){

	int k;
	cout << "inserisci un numero: ";
	cin >> k;
	try{
		cout << fib(k) << endl;
	}
	catch(string &s){
		cerr << s;
	}
}
