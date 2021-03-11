#include <iostream>

using namespace std;

int main(){

	int a=10;
	
	int *p = &a;
	
	cout << static_cast<void*>(*p);
}
