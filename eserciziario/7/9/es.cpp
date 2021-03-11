#include <iostream>
#include <cmath>
#include <string>
using namespace std;
const int N=9;

int input();

int main()
	try{
		int n = input();
		
		int v[N];
	
	for(int i=N-1; i>=0; --i){
		v[i]=n%2;
		n/=2;
	}
	
	for(int i=0; i<N; ++i)
		cout << v[i];
	cout << endl;
	}
	
	catch(string &e){
		cout << e;
	}


int input(){
	int n;
	cout << "inserisci un numero minore di "<< pow(2, N)<<endl;
	cin>>n;
	if (n<0){
		string err = "Numero minore di zero!";
		throw err;
	}
	else if(n>=pow(2, N)){
		string err="numero maggiore o uguale a 2^N";
		throw err;
	}
	return n;
}
