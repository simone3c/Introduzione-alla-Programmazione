#include <iostream>

using namespace std;

const int DIM = 10;

int main(){

	int v1[DIM]{1,2,3,4,5,6,7,8,9,10};
	int v2[DIM];

	for(int i=0; i<DIM; i++)
		v2[DIM-1-i] = v1[i];
	
	for(int i=0; i<DIM; i++)
		cout << v2[i] << " "; 

	return 0;
}
