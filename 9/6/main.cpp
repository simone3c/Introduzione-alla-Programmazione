#include <iostream>

using namespace std;

struct din{
	int* store;
	int size;

};

int get(const din& v, int i){
	if(i<0 or i>v.size){
		string s="errore";
		throw s;
	}
	
	return v.store[i];

}

int main(){
	din vett;
	vett.store = new int[10];
	vett.size=10;
	
	for(int i=0; i<10; ++i)
		vett.store[i] = i*i;
	
	cout << get(vett, 2) << endl;

}


