#include <iostream>
#include <string>

using namespace std;

int reverse(int);

int main(){
	
	int x;
	
	cout << "Scrivi un numero: ";
	cin >> x;
	
	int n = reverse(x);

	cout << "Il reverse è: " << n << endl;
	
}

int reverse(int k){

	int sign=1;
	if(k<0){
		sign =-1;
		k *= -1;
	}
	int inv = 0;
	while(k>0){
	
		int mod = k%10;
		k /=10;
		inv *= 10;
		inv += mod;
	}

	return inv*sign;
}






