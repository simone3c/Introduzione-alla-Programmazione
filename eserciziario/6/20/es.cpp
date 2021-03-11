// numero di zeri del fattoriale
#include <iostream>
#include <cmath>
using namespace std;

int zeri(int);

int main(){

	int n;
	cin >> n;
	
	int z = zeri(n);
	
	cout << z << endl;

	return 0;
}

int zeri(int n){
	if(n<0)
		return 0;
	int c=0;
	for(int i=5; n/i>=1; i *= 5)
		c += n/i;

	return c;
}

