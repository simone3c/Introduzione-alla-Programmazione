#include <iostream>

using namespace std;

struct my_vector{
	int size; // n. elementi inizializzati
	int capacity; // n.elementi memorizzabili
	int *store; // ptr all'array 

};

void create(my_vector&, int); //9

void print_vector(my_vector&);
 
void push_back(my_vector&, int); // 10

int pop_back(my_vector&); //11

void set(my_vector&, int, int); //12

int get(my_vector&, int); // 13

void destroy(my_vector&); // 14

void resize(my_vector&, int); // 15

void safe_push_back(my_vector& , int); // 16

bool looks_consistent(const my_vector &); // 17

int main()
try{

	my_vector v;
	create(v, 3);
	print_vector(v);
	push_back(v, 10);
	push_back(v, 15);
	push_back(v, 50);
	print_vector(v);
	cout << "pop-back: " <<  pop_back(v)<<endl;
	print_vector(v);
	set(v, 95, 1);
	cout << "set: ";
	print_vector(v);
	cout << "get: " << get(v, 1) << endl;
	//destroy(v);
	resize(v, 1);
	cout << "resize: ";
	print_vector(v);
	
	safe_push_back(v, 33);
	safe_push_back(v, 44);
	safe_push_back(v, 66);
	print_vector(v);
	
	cout << boolalpha << looks_consistent(v) << endl;

}
catch(string &s){	cerr << s;}

bool looks_consistent(const my_vector &v){
	return (v.store!=nullptr && 0<=v.size && v.size<=v.capacity && 0<v.capacity);
}

void safe_push_back(my_vector &v, int val){
	try{
		push_back(v, val);
	
	}
	catch(string &s){
		resize(v, 2*v.capacity);
		push_back(v, val);
	}
}

void resize(my_vector &v, int new_capacity){

	if(new_capacity<=0){
		string s="errore: capacity smaller than 1";
		throw s;
	}
	
	int *T = new int[new_capacity];
	int max = (v.size>new_capacity ? new_capacity : v.size);
	for(int i=0; i<max; ++i)
		T[i]=v.store[i];
	delete []v.store;
	v.store = T;
	v.capacity=new_capacity;
	if(new_capacity<v.size)
		v.size=new_capacity;
}

void destroy(my_vector &v){

	delete []v.store;
	v.store = nullptr;
	v.size = 0;
	v.capacity = 0;

}

int get(my_vector &v, int i){
	if(i<0 || i>=v.size){
		string s = "Errore: Index out of range";
		throw s;
	}
	return v.store[i];
}

void create(my_vector &v, int capacity){
	v.size=0;
	v.capacity = capacity;
	v.store = new int[capacity];

}

void print_vector(my_vector &v){
	for(int i=0; i<v.size; ++i)
		cout << *(v.store+i) << " ";
	cout << endl;
}

void push_back(my_vector &v, int x){

	if(v.size<v.capacity){
		v.store[v.size]=x;
		v.size++;
	}
	else{
		string s="vettore pieno\n";
		throw s;
	}
}

int pop_back(my_vector &v){
	if(v.size>0)
		return v.store[(v.size--)-1];
	string s = "vettore vuoto\n";
	throw s;

}

void set(my_vector &v, int val, int i){
	if(i>=0 && i<v.size)
		v.store[i] = val;
	else{
		string s ="indice non valido\n";
		throw s;
	}

}









