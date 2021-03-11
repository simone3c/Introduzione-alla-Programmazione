#include <iostream>

using namespace std;

int b(int n, int k){

	if(n<0 || k<0) throw "error";
	
	
	if(n==k || k==0) return 1;
	
	return b(n-1, k-1) + b(n-1, k);

}

int main(){

	cout << b(5, 2);

}
