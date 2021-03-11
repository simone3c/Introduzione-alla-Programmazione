#include <iostream>

using namespace std;

struct cell{
	int content;
	cell* next;

};
typedef cell* list;

void clear(list& l){
	if(l==nullptr) return;
	cell* cur = l;
	l=l->next;
	delete cur;
	clear(l);

}

void print(const list l){
	
	if(l==nullptr){
		cout << endl; 
		return;
	}
	cout << l->content << " ";
	print(l->next);
	
}

void head(list& l, int n){

	cell* aux = new cell;
	aux->content = n;
	aux->next = l;
	l=aux;
}

bool is_in(const list& l, int x){
	
	if(l==0) return false;
	if(l->content== x) return true;
	return is_in(l->next, x);
	
}

int length(const list& l){
	if(l==0) return 0;
	return 1+length(l->next);
}

void ins_in_order(list& l, int x){
	
	if(l==0) head(l, x);
	
	if(l->content > x) head(l, x);
	
	if(l->content == x) return;
	
	ins_in_order(l->next, x);
	
	
}

void rm(list& l, int x){

	if(l==0) return;
	if(l->content == x){
		cell* cur = l;
		l=l->next;
		delete cur;
		return;
		
	}
	rm(l->next, x);
}

void rev(list& l){
	
	if(l==0 || l->next == 0) return;
	
	list l1 = l->next;
	rev(l1);
	
	l->next->next=l;
	l->next = 0;
	l=l1;

}

void rev_aux(const list& l, list& r){
	
	if(l==0) return;
	
	head(r, l->content);
	rev_aux(l->next, r);

}

list rev_not_place(list& l){
	
	list r=0;
	rev_aux(l, r);
	return r;	
	
}


int min(list l){
	if(l==nullptr) throw "error";
	if(l->next == nullptr) return l->content;
	
	return (l->content < min(l->next)? l->content : min(l->next));

}

int sum(list l){
	if(l==nullptr) throw "erro";
	if(l->next == nullptr) return l->content;
	
	return l->content + sum(l->next);

}


int main(){
	
	list l = nullptr;
	
	for(int i=4; i>=0; --i)
		head(l, i);
	ins_in_order(l, 0);
	ins_in_order(l, -100);
	print(l);
	
	cout << boolalpha << is_in(l,4)<<endl;
	cout << boolalpha << length(l)<<endl;
	
	
	for(int i=4; i<8; ++i)
		ins_in_order(l, i*i);
	print(l);
	
	rm(l, 0);
	print(l);
	
	rev(l);
	print(l);
	
	list q = rev_not_place(l);
	print(q);
	
	cout << min(l) << " " << sum(l) << endl;
}
