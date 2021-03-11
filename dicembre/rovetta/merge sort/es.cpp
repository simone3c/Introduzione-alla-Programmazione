#include <iostream>
#include <string>

using namespace std;

struct cell{
	string content;
	cell *next;
};

typedef cell* list;

void headInsert(list&, string);
void print(list&);

void mergesort(list* l){

	if(*l==nullptr || *l->next == nullptr) return;
	
	
	list half_1;
	list half_2;

	halfsplit(*l, &half_1, &half_2);
	
	mergesort(&half_1);
	mergesort(&half_2);
	
	return merge(&half_1, &half_2);
	
}
void halfsplit(list source, list* front, list* half){

	cell* fast = source->next;
	cell* slow = source;

	while(fast != nullptr){
		fast = fast->next;
		if(fast != nullptr){
			slow = slow->next;
			fast = fast->next;
		}
	}
	
	*front = source
	*half = slow->next;
	slow->next = nullptr;
}

list merge(list a, list b){

	list z = nullptr;
	
	if(a==nullptr) return b;
	if(b==nullptr) return a;
	
	if(a->content <= b->content){
		z = a;
		z->next = merge(a->next, b);
	
	}
	
	else{
		z = b;
		result->next = merge(a, b->next);	
	}
	
	return z;

}

int main(){

	list l=nullptr;
	headInsert(l, "b");
	headInsert(l, "o");
	headInsert(l, "z");
	headInsert(l, "a");	
	headInsert(l, "l");
	
	
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


