#include <iostream>

using namespace std;

int main(){
	
	int *p = new int[10];

	*(p+2)=10;
	p[4]=20;
	
	for(int i=0; i<10; ++i) 
		cout << p[i] << (i==10-1 ? "\n" : " ");

	
}
