#include <iostream>
#include "set.h"

struct cell{
	base_type content;
	cell* next;

};

void create_empty_set(set &s){
	s = nullptr;

}

//scelgo un'implementazione basata su inserimento ordinato
// solo per prendere più efficiente l'operazione
void insert(set &s, base_type x){
	//creo una nuova cella
	cell* aux = new cell;
	aux->content = x;
		
	cell* cur = s;
	cell* prev = cur;
	
	while(cur != nullptr && cur->content<x){
		prev = cur;
		cur = cur->next;
	}
	// se sono uscito perchè ho trovato x nell'insieme non devo fare nulla
	if(cur != nullptr && cur->content==x)
		return;
	
	aux->next = cur;
	if(cur == s)
		s = aux;
	else
		prev->next = aux;
		
}

bool is_in_set(const set &s, base_type x){
	cell* cur=s;
	
	while(cur!=nullptr){
		if(cur->content == x)
			return true;
		cur = cur->next;
	}
	return false;

}

void print(const set &s){
	cell* cur=s;
	std::cout << "Set: ";
	while(cur!=nullptr){
		std::cout << cur->content << " - ";
		cur = cur->next;	
	}
	std::cout << std::endl;
}

void empty_set(set &s){
	cell* aux=s;
	
	while(s!=nullptr){
		s = s->next;
		delete aux;
		aux = s;
	}
}

//funzioni binarie
//output deve essere un insieme
set unione(const set &a, const set &b){
	set z;
	create_empty_set(z);
	
	cell* cur=a;
	while(cur!=nullptr){
		insert(z, cur->content);
		cur = cur->next;
	}
	
	cur = b;
	while(cur!=nullptr){
		insert(z, cur->content);
		cur = cur->next;
	}	
	
	return z;
}

set intersect(const set &a, const set &b){

	set z;
	create_empty_set(z);
	
	cell* aux = a;	

	while(aux != nullptr){
		if(is_in_set(b, aux->content))
			insert(z, aux->content);
		aux = aux->next;	
	
	}
	return z;
}

