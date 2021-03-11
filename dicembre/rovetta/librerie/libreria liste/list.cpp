#include "list.h"

using namespace std;

void insertSorted(list &l, string x){

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

string get(const list& l, int n){

	cell* cur = l;
	int i=0;
	while(cur!=nullptr && i<n){
		cur=cur->next;
		i++;
	}
	if(i==n && cur!=nullptr) // sono all indice che mi interessava
		return cur->content;
	string err = "out of list error";
	throw err;
}

void deleteAll(list& l){
	while(l != nullptr){
	
		cell* current = l;
		l = current->next;
		delete current;
	}
}

void tailInsert(list& l, string s){

	cell* aux = new cell;
	aux->content = s;
	aux->next = nullptr;
	
	cell* tmp = l;
	
	while(tmp->next != nullptr)
		tmp = tmp->next;
		
	tmp->next = aux;

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

void print(list &l){
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


