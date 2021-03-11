#include <iostream> 

using namespace std;

int mcd(const int& m, const int& n){

	if(n==m) return m;
	
	if(m>n) return mcd(m-n, n);
	return mcd(m, n-m);

}

int main(){

	cout << "inserisci: ";
	int a, b;
	cin >> a;
	cin >> b;	
	cout << mcd(a, b)<<endl;


}
