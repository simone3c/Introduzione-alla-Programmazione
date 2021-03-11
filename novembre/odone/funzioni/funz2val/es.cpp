/*
	come si fanno a fare funzioni che restituiscono 2 valori?
	che non sono implementate in c++
	
*/

#include <iostream>

using namespace std;

int sum(int, int);
void sum_diff(int, int, int&, int&);
void order(int &, int &);
int main(){
	
	int m, n;
	cout << "Inserisci 2 valori: ";
	cin >> m >> n;
	
	int s = sum(n, m);
	cout << "La somma è: " << s << endl;
	
	int diff;
	int s_nuova;
	sum_diff(m, n, s_nuova, diff);
	cout << "La somma nuova è: " << s_nuova << "\nLa differenza è: " << diff << endl;
}

// x e y param di input
int sum(int x, int y){
	return x+y;
}

// funzione che calcola somma e differenza di 2 interi

void sum_diff(int x, int y, int &s, int &d){
	s = x+y;
	d = x-y;
}

// funzione swap solo se x>y per avere il primo arg < del secondo
void order(int &x, int &y){
	if(x>y){
		int temp=x;
		x=y;
		y=temp;
	}
}
