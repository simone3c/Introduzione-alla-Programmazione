#include <iostream>

using namespace std;

int main(){

	string s1 = "hello ";
	string s2 = "world!";

	cout << "Debug 1: " << &s1 << &s2 << endl;

	string *p = &s1;
	
	cout << "Debug 2: " << p << " --> " << *p << endl;
	
	*p = "Ciao";
	cout << "Debug 3: " << p << " --> " << *p << endl; 
	
	p = &s2;
	cout << "Debug 4: " << p << " --> " << *p << endl; 
	
	*p = " mondo!";
	cout << s1 << s2 << endl;
	
}
