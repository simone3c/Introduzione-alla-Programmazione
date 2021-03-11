#include <iostream>

using namespace std;

int main(){

	int temp;
	
	cout << "Inserisci la temperatura: " << endl;
	cin >> temp;
	
	if(temp>=-20 && temp<=0)
		cout << "Freddo dannato!" << endl;
	else if(temp>=1 && temp<=15)
		cout << "Freddo" << endl;
	else if(temp>=16 && temp<=23)
		cout << "Normale" << endl;
	else if (temp>=24 && temp<=30)
		cout << "Caldo" << endl;
	else if(temp>=31 && temp<=40)
		cout << "Caldo da morire" << endl;
	else
		cout << "Non ci credo, il termometro deve essere rotto" << endl;
		
	return 0;
}
