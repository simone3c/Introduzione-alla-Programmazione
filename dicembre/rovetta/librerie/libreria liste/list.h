#ifndef LIST_H // evita che l'header sia incluso più volte nello stesso file
#define LIST_H

#include <iostream>
#include <string>

struct cell{
	std::string content;
	cell *next;
};

typedef cell* list;

void headInsert(list&, std::string);
void read(list&);
void print(list&);
void tailInsert(list&, std::string);
void deleteAll(list&);
std::string get(const list&, int);
void insertSorted(list&, std::string);// funzione che inserisce un elememto in una lista in maniera ordinata(crescente) [do per scontato che la lista ion unput sia gia ordinata, e dopo la funzione è ancora ordinata]

#endif
