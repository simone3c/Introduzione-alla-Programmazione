#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include <iostream>
#include <vector>
#include <string>


struct Contatto{
	std::string Name;
	std::string Surname;
	std::string Tel;
};

typedef std::vector<Contatto> Rubrica;

void add_contact(Rubrica&, std::string, std::string, std::string);

void print_rubrica(const Rubrica&);

void print_contact(const Contatto&);

void input_rubrica(Rubrica&);

void sort_surnames(Rubrica&);

int findPos(Rubrica&, std::string);

void shift(Rubrica&, int);

void add_ord(Rubrica &, std::string, std::string, std::string);

#endif
