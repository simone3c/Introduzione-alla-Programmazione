/*

	stampa scomposizione i fattori primi di n

*/

#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int);
void scomp(int);

const double TOLL = 0.00001;

int main(){
	
	int x;
	
	cout << "Scrivi un numero: ";
	cin >> x;

	scomp(x);
	
}

bool is_prime(int x){

	if(x==2) return true;
	else if(x%2==0) return false;

	for(int i=3; i<=sqrt(x); i+=2)
		if(x%i == 0)
			return false;
			
	return true;

}

void scomp(int n){
	if(is_prime(n)){
		cout << n << " è primo" << endl;
		return;
	}
	
	cout << n << " = ";
	int brutta = 0;
	for(int i=2; i<=n/2; ++i){
		int aux = n;
		if(is_prime(i) && n%i == 0){
			brutta++;
			int exp = 0;
			while(aux%i==0){
				aux/=i;
				exp++;
			}
			(brutta==1)?(cout << i << "^" << exp) : (cout << " * " << i << "^" << exp);
		}
	}
	cout << endl;
}






