#include <iostream>

using namespace std;

struct cell{
	int content;
	cell* next;

};

typedef cell* stack;

void insert(stack& s, int x){

	cell* aux = new cell;
	aux->content = x;
	aux->next = s;
	s=aux;

}

void remove(stack& s){
	if(s==nullptr) return;
	cell* aux = s;
	s = s->next;
	delete aux;

}

bool is_empty(stack& s){
	return s==nullptr;
}

void print_first(stack& s){
	if(s==nullptr){ cout << "vuoto\n"; return;}
	cout << "primo elemento: " << s->content << endl;
}

int main(){

	stack s=nullptr;
	
	insert(s, 10);
	insert(s, 12);
	insert(s, 0);
	
	print_first(s);
	remove(s);

	print_first(s);
	remove(s);

	print_first(s);
	remove(s);

	print_first(s);
}






