#include <iostream>

using namespace std;

const int N =4;

int main(){

int v[N];
int *p = v;
for(int i=0; i<N; ++i){

	cin >> *p;
	p++;		

}
float sum=0;
p=v;

for(int i=0; i<N; ++i){

	sum += *p;
	p++;		

}

cout << sum/N<< endl;

}
