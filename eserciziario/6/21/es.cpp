#include <iostream>
#include <string>
using namespace std;

void inserimento(int&);
void stampa_romano(int);

int main(){
	string err = "numero non valido";
	int n=1;
	try{
	inserimento(n);
	
	stampa_romano(n);
	}
	catch(string err){
		cout << err;
	}
	
 	return 0;
}

void inserimento(int &n){
	string err = "numero non valido";
	int x;
	cout << "Inserisci un numero da 1 a 3000: ";
	cin >> x;
	
	if(n<1 || n>3000) throw err;	
	n = x;
}

void stampa_romano(int n){
	int val = n;
	
		while(val>=1000){
			cout << "M";
			val -= 1000;
		}
		
		while(val>=900){
			cout << "CM";
			val -= 900;
		}
		
		while(val>=500){
			cout << "D";
			val -= 500;
		}
		
		while(val>=400){
			cout << "CD";
			val -= 400;
		}
		
		while(val>=100){
			cout << "C";
			val -= 100;
		}
		
		while(val>=90){
			cout << "XC";
			val -= 90;
		}
		
		while(val>=50){
			cout << "L";
			val -= 50;
		}
		
		while(val>=40){
			cout << "XL";
			val -= 40;
		}
		
		while(val>=10){
			cout << "X";
			val -= 10;
		}
		
		while(val>=9){
			cout << "IX";
			val -= 9;
		}
		
		while(val>=5){
			cout << "V";
			val -= 5;
		}
		
		while(val>=4){
			cout << "IV";
			val -= 4;
		}
		
		while(val>=1){
			cout << "I";
			val -= 1;
		}
		
		cout << endl;



}
