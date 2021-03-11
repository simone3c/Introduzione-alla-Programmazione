#ifndef STRINGLIST
#define STRINGLIST
#include "list_basic_types.h"
void read(list&);/* legge valori da input e li memorizza nella lista
La funzione non deve rilasciare la memoria puntata da l, ma deve
allocare la memoria necessaria a memorizzare gli elementi della lista
Dopo la chiamata l==testa della lista letta*/
void print(const list&);
std::string getElem(const list, int);
void deleteAt(list&, int);//cancella elemento in posizione fissata
void deleteOnce(list &, std::string);// deleteOnce cancella la prima occorrenza di una stringa in una lista
void deleteAll(list&);// deleteAll cancella tutte la lista
void insertSorted(list &, std::string);// insertInOrder inserisce in una lista ordinata mantendola ordinata
bool areEqual(ordList&, ordList&);
ordList concat(ordList&, ordList&);
ordList unione(ordList&, ordList&);
ordList intersect(ordList&, ordList&);

#endif
