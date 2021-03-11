// se è numero di armstrong
#include <iostream>
#include <cmath>
using namespace std;

bool arm(int);

int main(){
	int n;
	cout << "Inserisci un numero: ";
	cin >> n;
	
	cout << n << (arm(n)?(" è"):(" non è")) << " palindromo\n";

	return 0;
}

bool arm(int n){

	int k=n;
	int cifre=0;
	int mod;
	int sum=0;
	
	while(k>0){
		k /= 10;
		cifre++;
	}
	
	k=n;

	for(int i=0; i<cifre; i++){
		mod = k%10;
		sum += pow(mod, cifre);
		k /= 10;
	}
	if(sum==n) 
		return true;
	return false;
}
