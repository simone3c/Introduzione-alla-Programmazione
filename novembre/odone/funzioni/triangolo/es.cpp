#include <iostream>
#include <string>
using namespace std;

void stampaSpaz(int);
void stampaAst(int);
void stampaTriangolo(int);
void stampaElem(int, string);

int main(){

	int h;
	cout << "Inserisci h: ";
	cin >> h;
	
	stampaTriangolo(h);


}

void stampaTriangolo(int h){
	for(int i=1; i<=h; ++i){
		
		//stampaSpaz(h-i);
		//stampaAst(i);
		
		stampaElem(h-i, " ");
		stampaElem(i, "* ");
		
		cout << endl;
	}	
}
	

void stampaAst(int n){
	for(int i=1; i<=n; ++i)
		cout << "* ";
}

void stampaSpaz(int n){
	for(int i=1; i<=n; ++i)
		cout << " ";
}

void stampaElem(int n, string s){
	for(int i=1; i<=n; ++i)
			cout << s;
}


