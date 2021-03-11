#include <iostream>

using namespace std;

int main(){

	const int N =10;
	const int M = 10;
	
	int mat[M][N]{};
	
	/*for(int i=0; i<M; ++i)
		for(int k=0; k<N; ++k)
			mat[i][k]=0;*/

	
	for(int i=0; i<M; ++i){
		for(int k=0; k<N; ++k)
			cout << mat[i][k];
		cout << endl;
	}


	return 0;
}
