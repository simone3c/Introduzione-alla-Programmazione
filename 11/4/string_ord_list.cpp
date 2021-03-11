#include <iostream>
#include <vector>
#include "string_ord_list.h"
using namespace std;

ordList intersect(ordList& a, ordList& b){

	ordList z = nullptr;

	cell *cur_a = a;
	cell *cur_b = b;
	
	while(cur_a !=nullptr){ //con doppioni
		cur_b = b;
		while(cur_b!=nullptr){
			if(cur_a->content == cur_b->content)
				insertSorted(z, cur_a->content);
			cur_b = cur_b->next;
		}

		cur_a = cur_a->next;
	}
	
	if(z==nullptr) return nullptr;

	cell* cur = z->next;
	cell* prev = z;
	
	while(cur!=nullptr){ // elimino i doppioni

		if(cur->content == prev->content){
			prev->next = cur->next;
			cell* aux = cur;
			cur = cur->next;
			delete aux;
		}
		else{
			prev = cur;
			cur = cur->next;
		}
	}
	
	return z;
}

ordList unione(ordList &a, ordList &b){

	ordList t=concat(a, b);
	if(t==nullptr) return nullptr;
	cell* cur = t->next;
	cell* prev = t;

	while(cur!=nullptr){

		if(cur->content == prev->content){
			prev->next = cur->next;
			cell* aux = cur;
			cur = cur->next;
			delete aux;
		}
		else{
			prev = cur;
			cur = cur->next;
		}
	
	}
	
	return t;
}

ordList concat(ordList &a, ordList &b){

	ordList t = nullptr;
	cell* cur_a = a;
	while(cur_a!=nullptr){
		insertSorted(t, cur_a->content);
		cur_a = cur_a->next;
	}
		
	cell* cur_b = b;
		while(cur_b!=nullptr){
			insertSorted(t, cur_b->content);
			cur_b = cur_b->next;
		}
	return t;
}

bool areEqual(ordList& a, ordList& b){
	
	cell* cur_a = a;
	cell* cur_b = b;
	
	while(cur_a!= nullptr && cur_b!= nullptr){
		
		if(cur_a->content != cur_b->content)
			return false;
			
		cur_a = cur_a->next;
		cur_b = cur_b->next;
	}
	
	if(cur_a!= nullptr ^ cur_b!= nullptr) //XOR
		return false;
	return true;
}

void deleteAt(list &l, int ind){
	if(ind<0){
		string s="indice non valido\n";
		throw s;
	}
	
	cell* prev=l;
	cell* cur = l;
	
	if(ind==0){
		l = cur->next;
		delete cur;
		return;
	}
	
	int i=0;
	while(cur!=nullptr && i<ind){
		prev = cur;
		cur = cur->next;
		i++;
	}

	if(cur==nullptr){
		string s = "indice non valido\n";
		throw s;
		
	}

	prev->next=cur->next;
	delete cur;
	
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

void read(list& l){

	string s;
	cout << "inserisci una stringa(STOP per fermarti): ";
	cin >> s;
	while(s!="STOP"){
		cell* aux= new cell;
		insertSorted(l, s);
		
		cout << "inserisci una stringa(STOP per fermarti): ";
		cin >> s;
	}
}

void print(const list &l){
	cell* t=l;
	while(t!=nullptr){
		cout << t->content<<endl;
		t=t->next;
	
	}
}
