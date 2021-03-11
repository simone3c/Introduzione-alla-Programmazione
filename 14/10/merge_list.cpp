#include <iostream>
#include <cstdlib>
using namespace std;

struct cell{
	int content;
	cell* next;
};

typedef cell* list;

void print(const list& l){

	cell* cur = l;
	while(cur!=nullptr){
		cout << cur->content<<" ";
		cur=cur->next;
	}cout << endl;
}

void insert(list& l, int x){

	cell* aux = new cell;
	aux->content = n;
	aux->next = l;
	l=aux

}


void halfsplit(list& l, list& a, list& b){

	cell* slow = l;
	cell* fast = l->next;
	
	while(fast!=nullptr){
		fast = fast->next;
		if(fast!=nullptr){
			fast = fast->next;
			slow = slow->next;			
		}
	}
	
	a = l;
	b = slow->next;
	slow->next = nullptr;
	
}

list merge(list a, list b){

	list res = nullptr;
	
	if(a==nullptr) return b;
	if(b==nullptr) return a;
	
	if(a->content < b->content){
		res = a;
		res->next = merge(a->next, b);	
	}
	else{
		res = b;
		res->next = merge(a, b->next);
	}
		
	return res;

}


void mergesort(list& l){

	if(l==nullptr || l->next == nullptr) return;
	
	list a, b;
	
	halfsplit(l, a, b);
	
	mergesort(a);
	mergesort(b);
	
	l = merge(a, b);


}

int main(){
srand(time(NULL));


	list l = nullptr;
	
	for(int i=0; i<10; ++i)
		insert(l, rand()%100);
		

	print(l);
	cout << endl;
	
	mergesort(l);
	print(l);
	

}
