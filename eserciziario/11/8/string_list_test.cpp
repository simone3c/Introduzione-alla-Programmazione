#include <iostream>
#include <string>
#include "string_list.h"

using namespace std;
int main(){

	list l=nullptr;
	headInsert(l, "primo inserimento");
	headInsert(l, "secondo inserimento");
	headInsert(l, "terzo inserimento");

	print(l);
	
	try{
		insertAt(l, 10, "ultimo");
	}
	catch(string s){
		cerr << s << endl;
	}
	cout << "------"<<endl;
	print(l);
	
	deleteOnce(l, "terzo inserimento");
		cout << "------"<<endl;
	print(l);
	try{
		deleteAt(l, 0);
		cout << "------"<<endl;
		print(l);
	}
catch(string& s)
	{cerr<<s;}
}

