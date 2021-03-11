#include <iostream>
#include <cmath>

using namespace std;

void hello();
void hello_2(int);

int main(){
 	int n;
	hello();
	cin >> n;
	hello_2(n);
}

void hello(){
	cout << "Hello World!"<<endl;;
}

void hello_2(int n){
	cout << "Hello we are: " << n << endl;
}

