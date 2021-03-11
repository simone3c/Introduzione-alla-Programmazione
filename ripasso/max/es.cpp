#include <iostream>

using namespace std;

int max(int v[], int size){
	if(size<1) throw "eerore";
	if(size==1) return v[0];
	return (v[size-1] > max(v, size-1)? v[size-1]:max(v, size-1));

}

void m(int v[]){
	v[0] = -100;

}
const int N=2;
int main(){

	int v[N] = {2, 2};
	cout << max(v,N) << endl;
	
	m(v);
	cout << v[0] << v[1]<<max(v, N);
}
