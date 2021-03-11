// se è numero di armstrong
#include <iostream>
#include <cmath>
using namespace std;

int main(){

	int n, k;
	int cifre=0;
	int mod;
	int sum=0;
	int sum_pot;
	
	cout << "Inserisci un numero: ";
	cin >> n;
	k = n;
	
	while(k>0){
	
		k /= 10;
		cifre++;
	}
	
	k = n;
	
	for(int i=0; i<cifre; i++){
		
		sum_pot=1;
		
		mod = k%10;
		
		//sum += pow(mod, cifre); è equivalente a:
		for(int l=0; l<cifre; l++)
			sum_pot *= mod;
		sum += sum_pot;

		k /= 10;
	}
	
	if(sum==n)
		cout << n << " è un numero di armsrong" << endl;
	else
		cout << n << " NON è un numero di armsrong" << endl;
	


	return 0;
}
