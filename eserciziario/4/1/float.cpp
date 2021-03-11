#include <iostream>

using namespace std;

int main(){
	
	const int N = 10;
	float a[N];
	
	for(int i=0;i<N;++i){
		a[i]=N-i*2.1;
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
