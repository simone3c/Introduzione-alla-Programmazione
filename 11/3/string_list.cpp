#include <iostream>
#include "string_list.h"
using namespace std;

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

void insertAt(list &l, int pos, string x){
	if(pos<0){
		string s="indice non valido\n";
		throw s;
	}

	if(pos==0){
		headInsert(l ,x);	
		return;
	}
	
	cell* aux = new cell;
	aux->content = x;

	cell* cur = l;
	cell* prev = l;
	int i=0;
	while(cur!=nullptr && i<pos){
		prev = cur;
		cur=cur->next;
		++i;
	}
	aux->next = cur;
	prev->next = aux;

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
		headInsert(l, s);
		
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

void headInsert(list &l, string x){
	cell* aux = new cell;
	aux->content = x;
	aux->next = l;
	
	l = aux;

}
