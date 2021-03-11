//array_sort

#include <iostream>
#include <string>
using namespace std;

struct dynamic_array{
	int* store;
	int size;

};

void print_d_array(const dynamic_array&);

void read_d_array(dynamic_array&);

void array_sort(dynamic_array&, string);

int main()
try{

	dynamic_array v;
	read_d_array(v);
	array_sort(v, "selectionsort");
	print_d_array(v);

}
catch(string &err){
	cerr<<err;
}

void array_sort(dynamic_array &v, string s){

	if(s=="bubblesort" || s=="insertionsort"){
		string err = "algoritmo non conosciuto";
		throw err;	
	}

	for(int i=0; i<v.size; ++i){
		int smallInd=i;
		for(int k=i+1; k<v.size; ++k)
			if(v.store[k]<v.store[smallInd])
				smallInd=k;
		if(smallInd!=i){
			int temp = v.store[i];
			v.store[i] = v.store[smallInd];
			v.store[smallInd] = temp;
		
		}
	}
}


void print_d_array(const dynamic_array& d) {
	int *p = d.store;

	for(int i =0; i<d.size; ++i)
		cout << d.store[i] << (i==d.size?"\n":" ");
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

