// stampo un carattere n volte

#include <iostream>

using namespace std;

int main(){

	int len;
	cout << "Inserisci un numero: ";
	cin >> len;
	if(len<=0){
		cout << "Avevo detto positivo!";
		return 1;
	}
	
	char c;
	cout << "Inserisci il carattere da replicare: ";
	cin >> c;
	
	for(int i=1; i<=len; i++){
		cout << i << "-"<< c<<endl;
	}

	return 0;
}
