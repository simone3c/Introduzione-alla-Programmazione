#include <iostream>

using namespace std;

int main(){

	int n;
	cout << "Inserisci un numero positivo: ";
	cin >> n;
	
	int diag = 2*n+1;
	
	
	for(int i=0; i<n+1; i++){
	
		for(int k=0; k<diag; k++){
		
			if(k<n-i || k> n+i)
				cout << " ";
			else
				cout << "*";
		
		}
		
		cout << endl;
	
	}

	for(int i=n-1; i>=0; i--){
	
		for(int k=0; k<diag; k++){
		
			if(k<n-i || k>n+i)
				cout << " ";
			else
				cout << "*";
		
		}
		
		cout << endl;
	
	}


}
