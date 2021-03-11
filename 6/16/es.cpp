/*
	dice se il numero è palindromo
*/
#include <iostream>
#include <string>

using namespace std;

int reverse(int);
bool is_pal(int);

int main(){
	
	int x;
	
	cout << "Scrivi un numero: ";
	cin >> x;

	cout << x << (is_pal(x) ? " è" : " non è" ) << " palindromo" << endl;
	
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

bool is_pal(int x){
	return (x==reverse(x));
}






