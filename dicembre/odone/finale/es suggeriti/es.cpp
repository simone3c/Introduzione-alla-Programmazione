#include <iostream>

using namespace std;

struct cell{
	int content;
	cell* next;

};
typedef cell* list;

bool ex_one_smaller(const int x, const list l){
	
	if (l == nullptr) return false;
	if(l->content < x) return true;
	return ex_one_smaller(x, l->next);
}


bool all_greater_equal(const list l, int x){
	if(l==nullptr) return true;
	if(l->content < x) return false;
	
	return all_greater_equal(l->next, x);
	
}

void create_list(list& l){
	l=nullptr;
	
}

void insert(list& l, int x){
	cell* aux = new cell;
	aux->content = x;
	aux->next =l;
	l=aux;
}

void print(const list& l){

	if(l==nullptr) return;
	print(l->next);
	cout << l->content << " ";
	
	

}

int main(){

	list l;
	create_list(l);
	
	for(int i=0; i< 10; ++i)
		insert(l, i*i);
		
	print(l);
	cout << endl;
	
	cout << boolalpha << all_greater_equal(l, 10) << endl;
	
	cout << ex_one_smaller(100, l) << endl;

}
