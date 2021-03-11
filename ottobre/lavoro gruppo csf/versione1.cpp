/*
	versione1.cpp 
	
	simula un turno di morra cinese tra due utenti

	gruppo 13
	
	16/10/2020

*/

#include <iostream>

using namespace std;

int main(){

	//sasso = s -- carta = c -- forbice = f
	
	char p1=0;
	char p2=0;
	int vinc; // sarà 1 se vince p1 o 2 se vince p2
	
	while((p1!='c' && p1!='f' && p1!='s') || (p2!='s' && p2!='f' && p2!='c')){
		cout << "Mossa del primo giocatore(c - s - f): ";
		cin >> p1;
	
		cout << "Mossa del secondo giocatore(c - s - f): ";
		cin >> p2;
		
		if((p1!='c' && p1!='f' && p1!='s') || (p2!='s' && p2!='f' && p2!='c'))
			cout << "ERRORE nell'inserimento, riprova!!\n" << endl;
	}
		
	if(p1==p2){
		cout << "Pareggio!" << endl;
		return 0;
	}
		
	else if(p1=='c'){
		if(p2=='s') // c batte s
			vinc = 1;
		else	// f batte c
			vinc = 2;
	}
	
	else if(p1=='s'){
		if(p2=='c') // c batte s
			vinc = 2;
		else	// s batte f
			vinc = 1;
	}
	// p1 == f per esclusione
	else if(p2=='s')
		vinc = 2;
		
	else // p2 == carta per esclusione
		vinc = 1;
		
	if(vinc == 1)
		cout << "Vince il giocatore 1" << endl;
	else
		cout << "Vince il giocatore 2" << endl;
		
	return 0;
}
