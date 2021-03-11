#include <iostream>

using namespace std;

struct cell{
	int content;
	cell* next;

};

struct queue{
	cell* first;
	cell* last;
};

bool is_empty(const queue6 l){
	return q.first == nullptr;
}

void create_empty(queue& q){
	q.first =nullptr;
	q.last = nullptr;
}

void enqueue(queue& q, int x){ // in coda

	cell* aux = new cell;
	aux ->content = x;
	aux->next = nullptr;
	
	if(is_empty(q)){
		q.first = aux;
		q.last = aux;
		return;
		
	}
		
	q.last->next = aux;
	q.last=aux;
	
}

void dequeue(queue& q){ // dalla testa

	if(is_empty(q)) return;// SOLLEVO ECCEZIONE	
	
	cell* tmp = q.first;
	q.first = q.first->next;
	delete tmp;
	
	if(q.first == nullptr){
		q.last = nullptr;
	}

}


int main(){

	queue q;
	create_empty(q);
	
	for(int i=0; i<10;++i)
	enqueue(q, i);
	
	dequeue(q);


}
