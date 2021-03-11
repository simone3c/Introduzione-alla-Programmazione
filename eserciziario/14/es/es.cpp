#include <iostream>
#include <string>
#include "string_list.h"

using namespace std;

int main(){
	
	list l = nullptr;
	
	for(int i=0; i<10; ++i)
		rec_insert(l, to_string(i*i));
		
	rec_insert(l, "25");
		
	print(l);
	cout << endl;
	
	cout << length(l) << endl;
	
	cout << boolalpha << is_in(l, "0")<<endl;
	
	cout << rec_rm(l, "25")<<endl;
	print(l);
	
	list rev = reverse(l);
	cout << "reversed:\n";
	print(rev);

	
	rev_in_place(l);
	cout << "reversed:\n";
	print(l);



}
