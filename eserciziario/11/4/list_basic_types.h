#ifndef PIPPO
#define PIPPO
struct cell{
	std::string content;
	cell* next;
};

typedef cell* list;
typedef list ordList;
#endif
