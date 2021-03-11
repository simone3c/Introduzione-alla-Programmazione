#include <iostream>
#include "stack.h"
using namespace std;

int main(){

	stack s;
	create_empty(s);
	
	for(int i=0; i<10;++i)
		push(s, i);
		
	
try{
	cout << top(s)<< endl;
	
	pop(s);
	cout << top(s)<< endl;
}

catch(string &S){
	cerr << s;

}

}
