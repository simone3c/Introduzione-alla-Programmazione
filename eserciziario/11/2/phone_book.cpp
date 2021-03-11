#include <iostream>
#include <vector>
#include <string>
#include "phone_book.h"
using namespace std;

void add_ord(Rubrica &r, string nome, string cognome, string tel){
	try{
	sort_surnames(r);	
	
	int pos = findPos(r, cognome);
	
	shift(r, pos);
	r[pos].Name = nome;
	r[pos].Surname = cognome;
	r[pos].Tel = nome;
}
catch(string &e){cerr << e;}

}

void shift(Rubrica &v, int pos){

	if(pos<0 || pos>v.size()){
		string e = "indice non valido\n";
		throw e;
	
	}
	
	v.push_back(v.back());
	
	for(int i=v.size()-2; i>pos; --i)
		v[i+1] = v[i];
		

}

int findPos(Rubrica &r, string s){

	sort_surnames(r);
	
	int first =0;
	int last = r.size()-1;
	int mid = (first+last)/2;
	bool found = false;
	
	while(!found && last!=first){
		if(r[mid].Surname == s)
			return mid;	
			
		else if(s < r[mid].Surname){
			last = mid;
			mid = (first+last)/2;
		}
		else{
			first = mid;
			mid = (first+last)/2;
		}
	}
		
	for(int i=0; i<r.size(); ++i)
		if(s<r[i].Surname)
			return i;
	return r.size();
		
}

void sort_surnames(Rubrica &r){
	
	for(int i=0; i<r.size(); ++i){
	
		int smallInd=i;
		for(int k=i; k<r.size(); ++k)
			if(r.at(k).Surname < r.at(smallInd).Surname)
				smallInd = k;

		if(smallInd != i){
			Contatto temp = r[i];
			r[i] = r[smallInd];
			r[smallInd] = temp;
		}
	}
}

void input_rubrica(Rubrica &r){
	string nome;
	string cognome;
	string tel;
	
	Contatto voce;
	
	cout << "Inserisci nome-cognome-numero cell). STOP per fermarsi\n";
	cin >> nome; 
	
	while(nome!="STOP"){
		cin >> cognome;
		cin >> tel;
		add_contact(r, nome, cognome, tel);
		
		cin >> nome;
	}

}

void print_contact(const Contatto &c){
	cout << "nome: " << c.Name << " | cognome: " << c.Surname << " | tel: " << c.Tel << endl << "----" << endl;

}

void print_rubrica(const Rubrica &r){
	
	for(int i=0; i<r.size(); ++i){
		cout << i+1 << ") ";
		print_contact(r.at(i));
	}
}

void add_contact(Rubrica &r, string nome, string cognome, string cel){
	Contatto temp;
	temp.Name = nome;
	temp.Surname = cognome;
	temp.Tel = cel;
	
	r.push_back(temp);
}
