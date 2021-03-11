// da 4565 stampo 5654


#include <iostream>

using namespace std;

int main(){

	cout << "Inserire un numero positivio: ";
	int k;
	cin >> k;
	
	if(k<0){
		cout << "Valore non valido";
		return 666;
	}
	
	cout << "\nrovesciando " << k << endl;
	
	int inv = 0;
	
	while(k>0){
		int mod = k%10;
		k /= 10;
		inv *= 10;
		inv += mod;
	
	}
	
	cout << "Si ottiene: " << inv << endl;
	
	return 0;
}
