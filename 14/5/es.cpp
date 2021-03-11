#include <iostream>

using namespace std;

struct cell{
	int content;
	cell* next;

};

typedef cell* list;

void add(list& l, int x){ //in testa

	cell* aux = new cell;
	
	aux->content = x;
	
	aux->next = l;
	l=aux;

}

void print(const list& l){

	cell* cur = l;
	
	while(cur!=nullptr){
		cout << cur->content << " | ";
		cur = cur->next;
	}
	cout << endl;
}

bool is_in(const list& l, int x){

	if(l==nullptr) return false; //p. base
	if(l->content==x) return true; //p. base
	
	//return ((l->content==x) || is_in(l->next, x));
	return is_in(l->next, x); // p. induttivo

}


int main(){
	
	list l =  nullptr;	
	
	for(int i=0; i<=100001; ++i)
		add(l, i);
	
	//print(l);
	
	cout << boolalpha << is_in(l, 100001)<<endl;

}
