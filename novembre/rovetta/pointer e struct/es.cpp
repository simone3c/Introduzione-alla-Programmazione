#include <iostream>

using namespace std;

struct tavolo{

	int *h;
	int w;
	int l;
	string model;
};

int main(){

	tavolo t;
	int a=100;
	t.h=&a;
	t.w=60;
	t.l=190;
	t.model="Tina";
	
	tavolo *ptr;
	ptr = &t;

	
	cout << *ptr->h << endl;
	cout << ptr->model << endl;

}
