#include <string>
#include "stack.h"

using namespace std;

void create_empty(stack& s){
	s=nullptr;
}

bool empty(const stack& s){
	return s==nullptr;
}

// inserimento in testa
void push(stack& s, T x){
	cell* aux= new cell;
	
	aux->head = x;
	aux->next = s;
	s = aux;
}

void pop(stack& s){
	if(empty(s)){
		string st ="Pop: empty stack\n";
		throw st;
	}
	
	cell* aux = s;
	s=s->next;
	delete aux;

}

T top(const stack& s){
	if(empty(s)){
			string st ="Pop: empty stack\n";
			throw st;
	}
	
	return s->head;
}


