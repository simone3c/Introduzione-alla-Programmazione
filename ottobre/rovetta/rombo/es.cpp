#include <iostream>

using namespace std;

int main(){

	int n = 8;
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
	
		for(int k=diag-1; k>0; k--){
		
			if(k<n-i || k> n+i)
				cout << " ";
			else
				cout << "*";
		
		}
		
		cout << endl;
	
	}


}
