#include <iostream>

using namespace std;

int main(){

	const int N =10;
	
	int mat[N][N];
	int a;
	int b;
	
	for(int i=0; i<N; ++i)
		for(int k=0; k<N; ++k)
			mat[i][k] = (i+1)*(k+1);

	cout << "Inserisci 2 numeri tra 1 e 10: ";
	cin >> a;
	cin >> b;

	cout << "fa " << mat[a-1][b-1] << endl;
	
	for(int i=0; i<N; ++i){
		for(int k=0; k<N; ++k)
			cout << mat[i][k] << " ";
			
		cout << endl;
	}

	return 0;
}
