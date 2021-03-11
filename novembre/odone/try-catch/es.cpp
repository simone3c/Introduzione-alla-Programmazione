/*
	utilizzo della gestione delle eccezioni
	con throw e try-catch
*/

#include <iostream>
#include <string>
using namespace std;

long fact(int);

int main(){
		try{
			int n;
			cout << "Inserisci un numero: ";
			cin >> n;
			long f = fact(n);
			cout << "Il risultato è: " << f << endl;
		}
		catch(string &e){
			cerr << e << endl;
		}
		catch(...){
			cerr << "unknown exception" << endl;
		}

	return 0;
}

long fact(int n){
	
	if(n<0){
		string err = "n non può essere negativo";	
		throw err;
	}
	
	long tot=1;
	for(int i=2; i<=n; ++i)
		tot *= i;
	return tot;
}



