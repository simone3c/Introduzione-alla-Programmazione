/* stampo 
*
**
***
****

*/
#include <iostream>

using namespace std;

int main(){

	int n;
	cout << "Inserisci un numero: ";
	cin >> n;
	
	for(int i=1; i<=n; i++){
		for(int k=1; k<=i; k++)
			cout << "*";
		cout << endl;
	}

	return 0;
}
