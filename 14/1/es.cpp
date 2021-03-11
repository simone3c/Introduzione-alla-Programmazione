#include <iostream>

using namespace std;

int f(const int&);

int main()
try{
	cout << f(12)<<endl;
}
catch(string &s){
	cerr << s<<endl;

}

int f(const int& n){
	if(n<0){
		string s="numero non valido";
		throw s;
	}
	if(n==0) return 1;
	
	return n*f(n-1);
}
