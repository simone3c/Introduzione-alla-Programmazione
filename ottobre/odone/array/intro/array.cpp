#include <iostream>

using namespace std;

const unsigned int DIM = 10;

int main(){

	//inizializzazione array
	int a[DIM]{5,6,1,4,55,90,0,4,9,76};
	
	for(unsigned int i=0; i<DIM; i++)
		cout << a[i] << " ";
	cout << endl;
	
	//somma elementi
	int sum = 0;
	for(unsigned int i=0; i<DIM; i++)
		sum += a[i];
	cout << sum << endl;
	
	
	return 0;
}
