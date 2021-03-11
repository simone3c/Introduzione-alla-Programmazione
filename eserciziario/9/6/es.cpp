#include <iostream>

using namespace std;

struct dynamic_array {
	int* store;
	unsigned int size;
};

void print_d_array(const dynamic_array&);

void create_d_array(dynamic_array&, int, int);

void set(dynamic_array&, int, int);

int main()
try{
	dynamic_array v;
	v.store = nullptr;
	create_d_array(v, 10, 5);
	print_d_array(v);
	
	set(v, 0, 100);
	print_d_array(v);

}
catch(string &err){
	cerr << err << endl;
}

void set(dynamic_array &d, int i, int v){

	if(i<0 || i>=d.size){
		string s="Error: Inde out of range";
		throw s;
	}

	d.store[i]=v;

}

void create_d_array(dynamic_array &d, int s, int v){
	
	d.store = new int[s];
	d.size = s;
	for(int i=0; i<s; ++i)
		*(d.store+i)=v;

}


void print_d_array(const dynamic_array& d) {
	int *p = d.store;
	for(int i =0; i<d.size; ++i)
		cout << d.store[i] << " ";
	cout << endl;
}
