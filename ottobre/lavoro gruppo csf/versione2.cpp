/*
	versione2.cpp 
	
	simula un turno di morra cinese tra utente e pc
	mossa del pc generata tramite srand

	16/10/2020

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

	/* sasso = s 
	   carta = c 
	   forbice = f */
	
	
	char p1=0;
	char cpu;
	int vinc; // sarà 1 se vince p1 e 2 se vince cpu
	
	
	
	while((p1!='c' && p1!='f' && p1!='s')){
	
		cout << "Mossa del primo giocatore(c - s - f): ";
		cin >> p1;
	
		if(p1!='c' && p1!='f' && p1!='s')
			cout << "ERRORE nell'inserimento\n" << endl;	
	}

	int seed=static_cast<int>(time(NULL));
	srand(seed);
	
	int rand_cpu;
	rand_cpu = rand()%3;
	
	switch(rand_cpu){
	
		case 0:
			cpu = 'c';
			break;
			
		case 1:
			cpu = 's';
			break;
			
		default:
			cpu = 'f';
			break;	
	}
	
	cout << "Il computer ha giocato " << cpu << endl; // non obbligatorio ma utile per la comprensione

	if(p1==cpu){
		cout << "Pareggio!" << endl;
		return 0;
	}
	
	else if(p1=='c'){
		if(cpu=='s') // c batte s
			vinc = 1;
		else	// f batte c
			vinc = 2;
	}
	
	else if(p1=='s'){
		if(cpu=='c') // c batte s
			vinc = 2;
		else	// s batte f
			vinc = 1;
	}
	// p1 == f per esclusione
	else if(cpu=='s')
		vinc = 2;
		
	else
		vinc = 1;
		
	if(vinc == 1)
		cout << "Vince il giocatore 1" << endl;
	else
		cout << "Vince il computer" << endl;
		
	return 0;
}
