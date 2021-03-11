#include <iostream>

using namespace std;

struct cell{
	string content;
	cell *next;


};

typedef cell* list;

void headInsert(list&, string);
void read(list&);
void print(list&);
void tailInsert(list&, string);
void deleteAll(list&);

int main(){

	list l=nullptr;
	headInsert(l, "primo inserimento");
	headInsert(l, "secondo inserimento");
	headInsert(l, "terzo inserimento");
	read(l);
	//print(l);
	
	tailInsert(l, "messo in coda");
	tailInsert(l, "messo in coda 2");
	tailInsert(l, "messo in coda 3");
	print(l);
	cout << "------_"<<endl;
	deleteAll(l);
	print(l);
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


