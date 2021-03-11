/*
	data anno mese giorno e vede se è passata o futura

*/

#include <iostream>
#include <cmath>
using namespace std;

const double TOLL = 0.001;

struct Date{
	unsigned int anno;
	unsigned short mese;
	unsigned short giorno;
};

int main(){
	
	Date data;
	
	cout << "inserisci l'anno: ";
	cin >> data.anno;
	
	cout << "inserisci il mese: ";
	cin >> data.mese;
	
	cout << "inserisci il giorno: ";
	cin >> data.giorno;
	
	if(data.mese<=0 || data.mese>12 || data.giorno<=0 || data.giorno>31){
		cout << "ERRORE";
		return 0;
	}
	
	if(data.anno>2020)
		cout << "futura";
		
	else if(data.anno==2020){
	
		if(data.mese>10)
			cout << "futura";
		else if(data.mese==10){
		
			if(data.giorno>27)
				cout << "futura";
			else if(data.giorno==27)
				cout << "è oggi";
			else	
				cout << "Passata";
		}
		else	
			cout << "Passata";
	}
	else	
		cout << "Passata";
	
	return 0;
}

