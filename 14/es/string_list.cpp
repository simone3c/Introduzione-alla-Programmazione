#include <iostream>
#include "string_list.h"
using namespace std;

void rev_not_in_place(list& l, list& r){
	if(l==nullptr)return;
	headInsert(r,l->content);
	rev_not_in_place(l->next, r);
	
}

list reverse(list& l){

	list r = nullptr;
	rev_not_in_place(l, r);
	return r;

}

void rev_in_place(list& l){

	if(l==nullptr || l->next == nullptr) return;
	
	list l1 = l->next;
	rev_in_place(l1); // p. induttivo
	
	// p. base
	l->next->next = l;
	l->next = nullptr;
	l=l1;


}

bool rec_rm(list& l, string x){
	
	if(l==nullptr) return false;
	
	if(l->content == x){
		cell* cur;
		cur = l;
		l=l->next;
		delete cur;
		return true;
	}	
	
	return rec_rm(l->next, x);
	
}

bool rec_insert(list& l, string x){

	if(l==nullptr || l->content > x){
		cell* aux = new cell;
		aux->content = x;
		
		aux->next = l;
		l=aux;
		return true;
	}
	
	return rec_insert(l->next, x);

}


int length(const list& l){
	if(l==nullptr) return 0;
	
	return length(l->next)+1;

}

bool is_in(list& l, string x){
	if(l==nullptr) return false;
	
	if(l->content == x) return true;
	
	return is_in(l->next, x);

}

void deleteOnce(list &l, string x){

	cell* curr=l;
	cell* prev = l;
	while(curr!=nullptr && curr->content != x){
		prev = curr;
		curr = curr->next;
	}
	
	if(curr==nullptr)
		return;
	
	if(prev == l)
		l=curr->next;
	else
		prev->next = curr->next;
	delete curr;
}


void insertSorted(list &l, std::string x){

	cell* aux = new cell;
	aux->content = x;
	
	cell* cur = l;
	cell* prev = cur;
	
	while(cur!=nullptr && cur->content<=x){
		prev = cur;
		cur=cur->next;
	
	}
	
	aux->next = cur;
	if(cur==l)
		l=aux;
	else
		prev->next=aux;

}

void print(const list &l){
	cell* t=l;
	while(t!=nullptr){
		cout << t->content<<" ";
		t=t->next;
	
	}
	cout << endl;
}

void headInsert(list &l, string x){
	cell* aux = new cell;
	aux->content = x;
	aux->next = l;
	
	l = aux;

}
