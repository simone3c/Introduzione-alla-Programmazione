#include <iostream>

using namespace std;

int sum(int n, int x){
	if(n<=0) throw "error";
	if(n==1) return x*x;
	return x*x + sum(n-1, x);
}

int main(){

	cout << sum(3, 2) << endl;
	int *a = new int[5];
	int* b= a;
	delete []b;
	a=b=nullptr;
	cout << a << " " << b;
	
	int l, c;
	l=c=9;
	cout << l << "  " << c;
	
}
