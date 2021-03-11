#include <iostream>

using namespace std;

int main(){

	const int N=10;

	float a[N]{};

	for(int i=0; i<N; ++i)
		a[i]=N-i;
	
	int i;
	
	cout << "Inserisci i tra 0 e N: ";
	cin >> i;
	
	a[i] = .5*i*i;
	
	return 0;
}
