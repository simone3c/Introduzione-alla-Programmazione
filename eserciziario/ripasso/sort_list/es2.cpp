#include <iostream>
#include <cstdlib>

using namespace std;

struct cell{
	int content;
	cell* next;

};
typedef cell* list;

void print(const list& l){
	if(l==nullptr) return;
	cout << l->content << " ";
	print(l->next);
}

void head(list& l, int x){
	cell* aux = new cell;
	aux->content = x;
	aux->next = l;
	l=aux;
}

void halfsplit(list l, list& a, list& b){

	cell* fast = l->next;
	cell* slow = l;

	while(fast!=nullptr){
		fast = fast->next;
		if(fast!=nullptr){
			fast = fast->next;
			slow=slow->next;
		}	
	}

	a = l;
	b = slow->next;
	slow->next = nullptr;

}

list merge(list a, list b){

	if(a==nullptr) return b;
	if(b==nullptr) return a;
	list z;
	
	if(a->content < b->content){
		z=a;
		z->next = merge(a->next, b);
	}
	else{
		z=b;
		z->next=merge(a, b->next);
	}

	return z;

}

void mergesort(list& l){

	if(l==nullptr || l->next == nullptr) return;
	
	list a, b;
	halfsplit(l, a, b);
	
	mergesort(a);
	mergesort(b);
	
	l = merge(a, b);

}


void sel(list& l){

	for(cell* i=l; i!=nullptr; i=i->next){
		cell* smallind = i;
		for(cell* k=i->next; k!=nullptr; k=k->next)
			if(k->content < smallind->content)
				smallind = k;	
				
		if(smallind!=i){
			int t = i->content;
			i->content = smallind->content;
			smallind->content = t;	
		}
	}
}


int main(){

	list l = nullptr;
	
	for(int i=0; i<20; ++i)
		head(l, i%10);
	print(l);
	cout << endl;
	
	sel(l);
//	mergesort(l);
	print(l);
	cout << endl;
	
}
