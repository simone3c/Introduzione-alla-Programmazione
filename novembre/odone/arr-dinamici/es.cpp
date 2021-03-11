#include <iostream>

using namespace std;

struct dynamic_array {
	int* store;
	unsigned int size;
};

void print_d_array(const dynamic_array& d) {
	int *p = d.store;
	for(int i =0; i<d.size; ++i)
		cout << d.store[i] << "\t";
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

// inserisco value d[index]
void set(dynamic_array &d, int index, int value){
	if(index<0 || index>=d.size){
		string err = "Out of range error";
		throw err;
	}
	d.store[index]=value;

}
// restituisco il contenuto di d[index]
int get(const dynamic_array &d, int index){
	if(index<0 || index>=d.size){
		string err = "Out of range error";
		throw err;
	}
	return d.store[index];
}

// ridimensiona il vettore dinamico a new_dim
//due casi: 1) new_size>size 2) new_size<size
void resize(dynamic_array &d, unsigned int new_size){
	int *T = new int[new_size];
	for(int i=0; i<d.size; ++i)
		if(i<new_size)
			*(T+i)=*(d.store+i);
	delete []d.store;
	d.store = T;
	d.size = new_size;

}

int main()
try{
	dynamic_array v;
	
 	read_d_array(v);
 	print_d_array(v);
 	
 	set(v, 3, 10);
	print_d_array(v);
	cout << get(v, 3) << endl;
}
catch(string &err){
	cerr << err << endl;
}


