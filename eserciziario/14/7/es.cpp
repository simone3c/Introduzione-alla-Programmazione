#include <iostream>

using namespace std;

struct cell{
	int content;
	cell* next;

};

typedef cell* list;


void print(const list& l){

	cell* cur = l;
	
	while(cur!=nullptr){
		cout << cur->content << " | ";
		cur = cur->next;
	}
	cout << endl;
}

bool is_in(list &l, int x){

	if(l==nullptr) return false;
	if(l->content == x) return true;
	
	return is_in(l->next, x);

}

bool rec_add_in_order(list& l, int x){
		
	if(l==nullptr || l->content > x){	//inseriemnto in testa
		cell* aux = new cell;
		aux->content = x;

		aux->next = l;
		l=aux;	
		return true;
	}
	
	if(l->content == x) return false;
	
	rec_add_in_order(l->next, x); // p. ricorsivo
	return true;
}




int main(){
	
	list l =  nullptr;	
	
	for(int i=0; i<10; ++i)
		rec_add_in_order(l, i*i);
	
	

	rec_add_in_order(l, 11);
	print(l);
}
















