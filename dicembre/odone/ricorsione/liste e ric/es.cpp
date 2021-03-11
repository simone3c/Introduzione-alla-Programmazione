#include <iostream>
#include "string_list.h"

using namespace std;

void insert_order_aux(cell* &cur, cell* &prev, cell* aux){
	//p. base: posso fare l inserimento perchè sono nella posizione giusta
	if(cur==nullptr || cur->content > aux->content){
		aux->next = cur;
		prev->next = aux;
	}
	
	insert_order_aux(cur->next, prev->next, aux);		
	
}

void insert_order(list& l, string x){

	cell* aux = new cell;
	aux ->content = x;
	
	if(l==nullptr || l->content > x){ //caso particolare di inserimento in testa NON PASSO BASE
		aux->next = l->next;
		l=aux;
		return;
	}
	
	insert_order_aux(l->next, l, aux); 
	
}

void reverse(list& l){

	if(l==nullptr || l->next == nullptr) return;
	
	list l1 = l->next;
	reverse(l1);
	
	l->next->next = l;
	l->next = nullptr;
	l=l1;

}

int main(){
	list l = nullptr;
	
	headInsert(l, "1");
	headInsert(l, "2");
	headInsert(l, "3");
	headInsert(l, "4");
	
	print(l);
	
	reverse(l); 
	print(l);
		

}
