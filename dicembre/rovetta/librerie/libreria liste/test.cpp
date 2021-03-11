#include <iostream>
#include <string>
#include "list.h"

using namespace std;

int main(){

	list l=nullptr;
	headInsert(l, "primo inserimento");
	headInsert(l, "secondo inserimento");
	headInsert(l, "terzo inserimento");
	
	tailInsert(l, "messo in coda");
	tailInsert(l, "messo in coda 2");
	tailInsert(l, "messo in coda 3");

	print(l);
	try{
		cout << get(l, 0) << endl;
	}
	catch(string s){
		cerr << s << endl;
	}
	
}
