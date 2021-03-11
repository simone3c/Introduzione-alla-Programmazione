#include <iostream>
#include <string>

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
string get(const list&, int);
void insertSorted(list&, string);// funzione che inserisce un elememto in una lista in maniera ordinata(crescente) [do per scontato che la lista ion unput sia gia ordinata, e dopo la funzione è ancora ordinata]

int main(){

	list l=nullptr;
	headInsert(l, "primo inserimento");
	headInsert(l, "secondo inserimento");
	headInsert(l, "terzo inserimento");
	
	tailInsert(l, "messo in coda");
	tailInsert(l, "messo in coda 2");
	tailInsert(l, "messo in coda 3");

	print(l);
	try{
		cout << get(l, 33) << endl;
	}
	catch(string s){
		cerr << s << endl;
	}
	
}

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


