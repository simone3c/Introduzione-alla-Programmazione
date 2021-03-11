#include <iostream>

using namespace std;

struct dynamic_array{
	int *store;
	int size;
};

void print_d_array(const dynamic_array&);

void read_d_array(dynamic_array&);

void delete_d_array(dynamic_array&);

int main()
try{
	dynamic_array v;
	read_d_array(v);
	print_d_array(v);
	delete_d_array(v);
	print_d_array(v);
	delete_d_array(v);

}
catch(string &s){
	cerr << s;
}

void print_d_array(const dynamic_array& d) {
	int *p = d.store;

	for(int i =0; i<d.size; ++i)
		cout << d.store[i] << "\t\n";
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

void delete_d_array(dynamic_array &v){
	
	if(v.size<=0){
		string str="è già vuoto\n";
		throw str;
	}
	
	delete []v.store;
	v.size=0;
}
