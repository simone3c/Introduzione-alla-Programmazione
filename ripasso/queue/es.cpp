#include <iostream>

using namespace std;

struct cell{
	int content;
	cell* next;

};

struct queue{
	cell* head;
	cell* tail;
	
};

void insert(queue& q, int x){

	cell* aux=new cell;
	aux->content = x;
	aux->next = nullptr;
	
	if(q.tail == nullptr) {
	
		q.head = aux;
		q.tail=aux;
	
	}
	else{
	
		q.tail->next = aux;
		q.tail = aux;
	
	}
}

void remove(queue& q){
	if(q.head==nullptr) return;

	cell* aux = q.head;
	q.head = q.head->next;
	delete aux;
	if(q.head == nullptr)
		q.tail == nullptr;

}

void print(const queue& q){
	cell* cur = q.head;
	while(cur!=nullptr){
		cout << cur->content << " ";
		cur = cur->next;
	
	}
	cout << endl;
}


int main(){

	queue q;
	q.head = nullptr;
	q.tail = nullptr;
	
	insert(q, 10);
	insert(q, 100);
	insert(q, 1000);
	insert(q, 0);
	
	print(q);
	
	remove(q);
print(q);
remove(q);
remove(q);
remove(q);
print(q);
}
