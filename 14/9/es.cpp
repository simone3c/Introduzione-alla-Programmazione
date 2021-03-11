#include <iostream>

using namespace std;

struct cell{

	int content;
	cell* next;

};
typedef cell* list;

bool insert(list &l, int x){
	
	//if(l==nullptr || l->content > x){
		cell* aux = new cell;
		aux->content = x;
		aux->next = l;
		l=aux;	
		//return true;
	//}
	
	//if(l->content == x) return false;
	
//	insert(l->next, x);
	return true;
}

void rev_in_place(list& l){

	if(l==nullptr || l->next==nullptr) return;
	
	list l1 =l->next;
	rev_in_place(l1);
	
	l->next->next = l;
	l->next = nullptr;
	l=l1;

}

void rev(const list& l, list& r){

	if(l==nullptr) return;
	
	insert(r, l->content);
	rev(l->next, r);

}

list reverse(list& l){
	list r = nullptr;
	rev(l, r);
	return r;
}




void print(const list& l){

	cell* cur=l;
	while(cur!=nullptr){
		cout << cur->content << " ";
		cur = cur->next;
	}
	cout << endl;
}


int main(){

	list l=nullptr;
	
	for(int i=0; i<10; i++)
		insert(l, i*2);
		
	print(l);

	list r = reverse(l);	
	print(r);
	
	rev_in_place(l);
	print(l);

}
