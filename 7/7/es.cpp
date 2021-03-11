#include <iostream>

using namespace std;

int main(){
	
	const int N = 4;
	int M[N][N];
	bool isSimmetric = true;
	
	for(int i=0; i<N; ++i){
		for(int k=0; k<N; ++k)
			cin >> M[i][k];
		
	}
	
	for(int i=0; i<N; ++i){
		for(int k=0; k<N; ++k)
			if(M[i][k] != M[k][i])
				isSimmetric = false;
	}
	
	cout << isSimmetric << endl;
}


