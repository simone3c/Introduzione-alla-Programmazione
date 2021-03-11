#ifndef STACK_H
#define STACK_H

typedef int T;

struct cell{
	T head;
	cell* next;

};

typedef cell* stack;

void create_empty(stack&);
void push(stack&, T);
void pop(stack&);
T top(const stack&);
bool empty(const stack&);

#endif
