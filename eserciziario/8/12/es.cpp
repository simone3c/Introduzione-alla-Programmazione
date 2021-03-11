#include <iostream>

using namespace std;

const int R = 10;
const int C = 10;

int main(){

	char m[R][C];
	for(int i=0; i<R; ++i)
		for (int k=0; k<C; ++k)	
			cin >> m[i][k];
		
	char *p = &m[0][0];
	bool ok=true;
	int i =0;
	while(ok && i<R){
		cout << endl;
		for(int k=0; k<C; ++k){
			cout << *(p+C*i+k) << " ";
			if(*(p+C*i+k) <'A' || *(p+C*i+k) >'Z')
				ok = false;
		}
		++i;
	}
	
	cout << "La martice è " << ok << endl;

}
