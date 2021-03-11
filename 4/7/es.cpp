#include <iostream>

using namespace std;

int main(){

	const int N = 5;
	
	int v[N]{};
	int nPari=0;
	int nDispari=0;
	
	
	for(int i=0; i<N; ++i)
		cin >> v[i];
		
	for(int i=0; i<N; ++i){
		if(v[i]%2==0)
			nPari++;
		else
			nDispari++;
	}

	cout << nPari << "   " << nDispari << endl;

	return 0;
}
