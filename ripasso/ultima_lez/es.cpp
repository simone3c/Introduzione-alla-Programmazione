#include <iostream>

using namespace std;

struct cell{
	int content;
	cell* next;

};
typedef cell* list;

void insert(list& l, int x){
	cell* aux = new cell;
	aux->content = x;
	aux->next =l;
	l=aux;
}

bool age(int x, const list l){

	if(l==nullptr) return true;
	if(l->content < x) return false;
	return age(x, l->next);

}

bool eos(int x, list l){
	
	if(l==nullptr) return false;
	if(l->content < x) return true;
	
	return eos(x, l->next);
	
}

int main(){

	list a=0;
	
	insert(a, 10);
	insert(a, 15);
	insert(a, 3);
	
	
	cout << age(4, a)<<endl;
	cout << eos(11, a)<<endl;

}
