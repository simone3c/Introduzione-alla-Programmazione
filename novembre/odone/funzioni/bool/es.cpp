#include <iostream>

using namespace std;

bool ordered(int, int);

int main(){

	int n=7;
	int k=8;
	
	cout << boolalpha << ordered(n, k);
}

bool ordered(int x, int y){
	return (x<y);
}
