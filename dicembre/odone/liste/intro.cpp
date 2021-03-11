#include <iostream>

using namespace std;

typedef int Elem; // tipo base della lista

struct cell{
	Elem info;
	cell* next; // puntatore alla cella successiva

};

typedef cell* list; // nome più significativo per la lista

void head_insert(Elem, list&);

void head_insert(list&);

int main(){

	list l = nullptr;
	
	head_insert(3, l);


}

void head_delete(list &l){
	cell *aux = l->next;
	
	delete l; // libera lo spazio di mem puntato da l
	l=aux;
}

void head_insert(Elem x, list &l){

	cell *aux = new cell;
	aux->info = x;
	aux->next = l; // la nuova cella punta alla "vecchia nuova cella" che ora è la seconda
	
	l = aux; // il ptr alla prima cella della lista deve puntare a aux

}








