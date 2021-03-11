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

int length(const list& l){

	if(l==nullptr) return 0;
	
	
	return (1+length(l->next));

}


int main(){
	
	list l =  nullptr;	
	
	for(int i=1; i<=6532; ++i)
		add(l, i);
	
	//print(l);
	
	cout << boolalpha << length(l)<<endl;

}
