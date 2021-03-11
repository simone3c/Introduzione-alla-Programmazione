#include <iostream>

using namespace std;
const int N=5;

void f(int vv[N]){

	cout << "Dim== " << sizeof(vv) << endl;
	

}



int main(){

	int v[N];
	
	int *p = v;
	
	cout << "Dimensione di v== "<<sizeof(v) << endl;
	cout << "v ha dimensione " << sizeof(v)/sizeof(v[0]) << endl;
	
	cout << "Dimensioni di p== " << sizeof(p) << endl;
	
	f(v);
	
}


