#include <iostream>

using namespace std;

void readMat(int[][2]);

int main(){

	int a[2][2]{1,2,3,4};

		
	readMat(a);
	
	for(int i=0; i<2; ++i){
		for(int k=0; k<2; ++k)
			cout << a[i][k] << " ";
		cout << endl;
	}

}

void readMat(int a[][2]){
	for(int i=0; i<2; ++i)
		for(int k=0; k<2; ++k)
			cin >> a[i][k];
}
