#include <iostream>

using namespace std;

struct dynamic_array {
	int* store;
	unsigned int size;
};

void print_d_array(const dynamic_array&);

void read_d_array(dynamic_array&);

void delete_d_array(dynamic_array&);

void create_d_array(dynamic_array&, int, int);


int main()
try{
	dynamic_array v;
	v.store = nullptr;
	create_d_array(v, 10, 5);
	print_d_array(v);

}
catch(string &err){
	cerr << err << endl;
}

void create_d_array(dynamic_array &d, int s, int v){
	if(d.size!=0)
		delete_d_array(d);
	
	d.store = new int[s];
	d.size = s;
	for(int i=0; i<s; ++i)
		*(d.store+i)=v;

}

void delete_d_array(dynamic_array &d){
	if(d.size==0){
		string e = "è già vuoto";
		throw e;
	}
	
	delete []d.store;
	d.store = nullptr;
	d.size=0;
}

void print_d_array(const dynamic_array& d) {
	int *p = d.store;
	for(int i =0; i<d.size; ++i)
		cout << d.store[i] << " ";
	cout << endl;
}

void read_d_array(dynamic_array &d){
	int s=-1;
	
	while(s<=0){
		cout << "Inserisci la dimensione del vettore: ";
		cin >> s;
	}

	d.size = s;
		
	d.store = new int[s];
	
	for(int i=0; i<s; ++i){
		cout << "inserisci un valore: ";
		cin >> d.store[i];
	}
}
