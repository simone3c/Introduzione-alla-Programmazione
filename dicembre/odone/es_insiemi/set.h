/*
	set.h
	implementazione del tipo di dato insieme
	basato su liste semplici
*/

#ifndef SET_H
#define SET_H

//caratteristiche insieme:
//collezione di elementi omogenei 
//senza ripetizione
//non ordinato

//	tipi
		
typedef int base_type;

typedef struct cell base_elem; 

typedef base_elem* set; // set è una lista
		
//	prototipi delle funzioni

//funzioni unarie
void create_empty_set(set &);
void insert(set &, base_type);
bool is_in_set(const set&, base_type);
void print(const set&);
void empty_set(set&);

//funzioni binarie
set unione(const set&, const set&);
set intersect(const set&, const set&);







#endif
