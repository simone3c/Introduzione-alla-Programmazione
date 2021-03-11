/*
	versione3.cpp 

	simula più turni di morra cinese tra utente e pc
	mossa del pc generata tramite srand

	16/10/2020

*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

const int MAX = 3;

int main(){
	/* sasso = s 
	   carta = c 
	   forbice = f */
	
	char mossa_p1=0; 
	char mossa_cpu;
	string st_mossa_p1; // usata solo per la stampa
	string st_mossa_cpu; // usata solo perla stampa
	int vitt_p1=0; // n. vittorie giocatore1
	int vitt_cpu=0; // n. vittorie pc
	int turno=0; // contatore turni
	string nome;

	cout << "Come ti chiami: ";
	cin >> nome;
	
	for(int t=0; t<MAX; t++){
		
		mossa_p1 = 0;
		st_mossa_p1 = "";
		
		while((mossa_p1!='c' && mossa_p1!='f' && mossa_p1!='s')){
	
			cout << "Mossa del primo giocatore(c - s - f): ";
			cin >> mossa_p1;
		
			if(mossa_p1!='c' && mossa_p1!='f' && mossa_p1!='s')
			
				cout << "ERRORE nell'inserimento\n" << endl;
		}

		int seed=static_cast<int>(time(NULL));
		srand(seed);

		int rand_cpu;
		rand_cpu = rand()%3;
		
		switch(rand_cpu){
			case 0:
				mossa_cpu = 'c';
				st_mossa_cpu = "carta";
				break;
		
			case 1:
				mossa_cpu = 's';
				st_mossa_cpu = "sasso";
				break;
	
			default:
				mossa_cpu = 'f';
				st_mossa_cpu = "forbice";
		}

		cout << "Il computer gioca " << st_mossa_cpu << endl;

		if(mossa_p1==mossa_cpu)
			cout << "Parita'!" << endl;

		else if(mossa_p1=='c'){
			st_mossa_p1 = "carta";
			
			if(mossa_cpu=='s'){ // c batte s
				cout << st_mossa_p1 << " vince su " << st_mossa_cpu << endl;
				vitt_p1++;
			}
			else{	// f batte c
				cout << st_mossa_cpu << " vince su " << st_mossa_p1 << endl;
				vitt_cpu++;
			}
		}
		else if(mossa_p1=='s'){
			st_mossa_p1 = "sasso";
			
			if(mossa_cpu=='c'){ // c batte s
				cout << st_mossa_cpu << " vince su " << st_mossa_p1 << endl;
				vitt_cpu++;
			}
			else{	// s batte f
				cout << st_mossa_p1 << " vince su " << st_mossa_cpu << endl;
				vitt_p1++;
			}
		}
		// mossa_p1 == f per esclusione
		else if(mossa_cpu=='s'){ // s batte f
			st_mossa_p1 = "forbice";
			cout << st_mossa_cpu << " vince su " << st_mossa_p1 << endl;
			vitt_cpu++;
		}
		// per esclusione mossa_cpu == c
		else{ // f batte c
			st_mossa_p1 = "forbice";
			cout << st_mossa_p1 << " vince su " << st_mossa_cpu << endl;
			vitt_p1++;
		}	
	}		
	
	if(vitt_p1 > vitt_cpu)
		cout << "\nVince " << nome << endl;
	else if (vitt_p1 < vitt_cpu)
		cout << "\nVince il computer" << endl;
	else
		cout << "\nNon ha vinto nessuno" << endl;
		
	return 0;
}
