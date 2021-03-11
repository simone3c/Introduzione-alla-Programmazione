#include <iostream>

using namespace std;

struct my_vector {
	int* store;
	unsigned int capacity;
	unsigned int size;
};

//creo un vettore VUOTO(cioè con size=0)
void create(my_vector &d, unsigned int capacity){
	d.capacity = capacity;
	int *T = new int[d.capacity];
	d.store = T;
	d.size = 0;

}

bool is_empty(my_vector &d){
	return (d.size==0);
}
//aggiunta di un valore all array
void push_back(my_vector &d, int value){
	if(d.capacity==d.size) // ho finito lo spazio
		throw "Ho finito lo spazio";
	
	*(d.store+d.size)=value;
	d.size++;
}

// duale del push_back: elimina l ultimo elemento dell array
void pop_back(my_vector &d){
	if(d.size==0) throw "Array già vuoto";
	d.size--;//il contenuto rimane lì ma tanto non ci accederò più
	
}



int main(){

}


