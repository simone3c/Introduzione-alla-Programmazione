#include <iostream>
#include <string>
using namespace std;

struct Person{
	string name;
	string surname;
	int anno;
};

int main(){

		Person me, you;
		
		me.name="Simone";
		me.surname="3c";
		me.anno=2001;
		
		you.name="Tom";
		you.surname="Cruise";
		you.anno=1962;

		me = you;
	
		cout << "My name is " << me.name << " " << me.surname <<" " << me.anno << endl;
		cout << "Your name is " << you.name << " " << you.surname << " " << you.anno << endl;

}
