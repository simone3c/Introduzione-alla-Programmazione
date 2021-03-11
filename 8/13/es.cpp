#include <iostream>

using namespace std;

const int R = 10;
const int C = 10;

int main(){

	char m[R][C];
	char *p = &m[0][0];

	for(int i=0; i<R; ++i)
		for(int k=0; k<C; ++k)
			cin >> m[i][k];

	
	for(int i=0; i<R; ++i){
		for(int k=0; k<i; ++k)
			cout << " ";
		cout << *(p+i*C+i) << endl;
	}
		

}
