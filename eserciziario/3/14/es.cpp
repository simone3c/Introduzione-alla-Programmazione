// verifica numero palindromo

#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int n=0;
	int c=0;
	int n_cifre=0;
	int vf=0;
	int mod;
	
	cout << "Inserisci un numero: ";
	cin >> n; 
	c = n;
	
	while(c>0){
	
		c/=10;
		n_cifre++;
	
	}
	
	c=n;
	
	for(int i=n_cifre; i>=0; i--){
		
		mod = c%10;
		vf += mod*pow(10,i);
		c/=10;
	
	}
	
	if(n==vf)
		cout << "SI" << endl;
	else
		cout << "NO" << endl;

	return 0;
}
