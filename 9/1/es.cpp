#include <iostream>

using namespace std;

struct Person{
	string name;
	string surname;
	int birthyear;
};

struct Person2{
	string *name;
	string surname;
	int birthyear;
};


int main(){

	Person p;
	p.name="simone";
	p.surname="dagnino";
	p.birthyear=2001;
	
	Person *ptr;
	ptr = &p;
	
	cout << p.name << endl;
	cout << ptr->name << endl;
	
	ptr->name = "cambiato";
	cout << p.name << endl;
	cout << ptr->name << endl << endl;
	
	Person *ptrheap = new Person;
	p.name="simone";
	ptrheap->name = p.name;
	
	cout << p.name << endl;
	cout << ptrheap->name << endl;
	
	ptr->name = "cambiato";
	cout << p.name << endl;
	cout << ptrheap->name << endl << endl;

	//-------------------------
	
	Person2 p2;
	string nome = "letizia";
	p2.name = &nome;
	p2.surname = "pastorino";
	p2.birthyear=2000;
	
	Person2 *ptr2;
	ptr2 = &p2;
	cout << *p2.name <<endl;
	cout << p2.surname << endl; 
	
	cout << ptr2->name <<endl;
	cout << *ptr2->name <<endl;
	

}
