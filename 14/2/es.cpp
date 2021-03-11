#include <iostream>

using namespace std;

int bin(const int& n, const int& k){

	if(n<0 || k<0 || k>n){
		string s="input non valido!";
		throw s;
	}
	
	if(k==0 || k==n) return 1;
	
	return (bin(n-1, k-1)+bin(n-1, k));

} 

int main(){
	int n, k;
	cout << "inserisci n e k: ";
	cin >> n;
	cin >> k;
	try{
		cout << bin(n, k) << endl;
	}
	catch(string &s){
		cerr << s << endl;
	}
}
