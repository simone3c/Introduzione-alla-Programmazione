#include <iostream>
#include <string>
#include "string_ord_list.h"

using namespace std;
int main(){

	ordList l=nullptr;
	ordList w=nullptr;
	insertSorted(l, "1");
	insertSorted(l, "2");
	insertSorted(l, "44");
	insertSorted(l, "44");
	
	insertSorted(w, "10");
	insertSorted(w, "20");
	insertSorted(w, "10");
	
	cout << boolalpha << areEqual(l, w)<<endl;

	ordList t = concat(l, w);
	print(t);
	cout << "--------\n";

	ordList un = unione(l, w);
	print(un);
	cout << "--------\n";
	
	ordList in = intersect(l, w);
	print(in);
	cout << "--------\n";
	
}

