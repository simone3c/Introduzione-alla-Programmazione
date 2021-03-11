#include <iostream>

using namespace std;

void print_tr(int);

int main(){

	int n;
	cout << "Quanto sarà lunga la base: ";
	cin >> n;
	
	print_tr(n);

}


void print_tr(int n){
	//alla riga i stampo i'*'
	for(int i=1; i<=n; ++i){
		for(int k=0; k<i; ++k)
			cout << '*';
		cout << endl;
	}
}
