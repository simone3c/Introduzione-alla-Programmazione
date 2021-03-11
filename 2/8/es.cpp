#include <iostream>

using namespace std;

int main(){
	
	unsigned int y;
	
	cout << "Inserisci un anno maggiore di zero: ";
	cin >> y;
	
	if(y%4==0){
		if(y%100==0){
			if(y%400==0) 
				cout << "SI" << endl;
			
			else 
				cout << "NO" <<  endl;	
		}
		else
			cout << "SI" << endl;
	}
	else
		cout << "NO" << endl;
		

	return 0;
}
