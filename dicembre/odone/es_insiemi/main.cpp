#include <iostream>
#include "set.h"

using namespace std;

int main(){

	set s;
	create_empty_set(s);
	int i;
	
	/*cout << "inserisci un numero: ";
	cin >> i;
	insert(s, i);
	
	cout << "inserisci un numero: ";
	cin >> i;
	insert(s, i);*/
	
	print(s);
	//empty_set(s);
	//print(s);
	
	set b;
	create_empty_set(b);
	//insert(b, 20);
	//insert(b, 9);
	print(b);
	
	set u = unione(s, b);
	print(u);
	
	set in = intersect(s, b);
	print(in);

}
