#include <iostream>

using namespace std;

int main(){

	const int N = 10;
	
	int source[N];
	
	for(int i=0; i<N;++i)
		cin >> source[i];
		
	int dest[N];
	
	for(int i=0; i<N; ++i)
		dest[N-i-1] = source[i];
	

	for(int i=0; i<N; ++i)
		cout << dest[i] << " ";
		
	cout << endl;

	return 0;
}
