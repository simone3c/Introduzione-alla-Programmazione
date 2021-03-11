#ifndef STRINGLIST
#define STRINGLIST
struct cell{
	std::string content;
	cell* next;
};

typedef cell* list;
list rev_not_in_place(list&);
list reverse(list& );
void rev_in_place(list&);
bool rec_rm(list& , std::string);
bool rec_insert(list&, std::string);
int length(const list& l);
bool is_in(list&, std::string);
void headInsert(list&, std::string);
void read(list&);/* legge valori da input e li memorizza nella lista
La funzione non deve rilasciare la memoria puntata da l, ma deve
allocare la memoria necessaria a memorizzare gli elementi della lista
Dopo la chiamata l==testa della lista letta*/
void print(const list&);
std::string getElem(const list, int);
void insertAt(list &, int, std::string);// insertAt inserimento in posizione fissata
void deleteAt(list&, int);//cancella elemento in posizione fissata
void deleteOnce(list &, std::string);// deleteOnce cancella la prima occorrenza di una stringa in una lista
void deleteAll(list&);// deleteAll cancella tutte la lista
void insertSorted(list &, std::string);// insertInOrder inserisce in una lista ordinata mantendola ordinata
#endif
