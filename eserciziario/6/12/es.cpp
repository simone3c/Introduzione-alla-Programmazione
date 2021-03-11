#include <iostream>

using namespace std;

void print_tr(int, int);

int main(){

	int B, a;
	cout << "Quanto sarà lunga la base corta: ";
	cin >> a;
	
	cout << "Quanto sarà lunga la base lunga: ";
	cin >> B;
	
	print_tr(a, B);

}


void print_tr(int a, int B){
	
	for(int i=a; i<=B; ++i){
		for(int k=0; k<i; ++k)
			cout << '*';
		cout << endl;
	}
}
