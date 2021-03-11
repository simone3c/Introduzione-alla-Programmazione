/*
	
	modello di punto su piano
	cartesiano
	
	modello di rettangolo su piano
	cartesiano
	
	guardo se è un quadrato
	guardo se è più alto che largo

*/

#include <iostream>
#include <cmath>
using namespace std;

const double TOLL = 0.001;

struct Point{
	double x;
	double y;
};

struct Rect{
	Point top_left;
	Point bot_right; 
};

int main(){
	
	
	Rect ret1;
	
	//per essere sicuri di inserire valori giusti per i punti faccio dei controlli sul fatto che effettivamente uno sia in alto a sx e l altro in basso dx
	
	Point p1_temp, p2_temp;
	
	cout << "Inserisci le coordinate del vertice alto a sx: ";
	cin >> p1_temp.x >> p1_temp.y;
		
	cout << "Inserisci le coordinate del vertice basso a dx: ";
	cin >> p2_temp.x >> p2_temp.y; 
	
	if(p1_temp.x<p2_temp.x && p1_temp.y > p2_temp.y){
		ret1.top_left = p1_temp;
		ret1.bot_right = p2_temp;
	
	}
	else{
		cout << "ERRORE" << endl;
		return -1;
	}
	
	//stampa
	cout << "il rettangolo" << endl 
		   << "top left: ("<<ret1.top_left.x<<","<<ret1.top_left.y<<")"<< endl
		   << "bottom right: ("<<ret1.bot_right.x<<","<<ret1.bot_right.y<<")"<< endl;
		   
	// DA QUI IN POI USO SOLO RET1 E NON 			PIÙ P1_TEMP E P2_TEMP	
	//è un quadrato?
	
	double base=ret1.bot_right.x-ret1.top_left.x;
	double altezza = ret1.top_left.y-ret1.bot_right.y;
	
	if(fabs(base-altezza)<TOLL)
		cout << "é un quandrato"<<endl;
	
	else if((altezza-base)>TOLL)
		cout << "é un rettangolo ALTO"<<endl;
	
	else//inverto le coordinate di bot_right
		ret1.bot_right.x = ret1.top_left.x + altezza;
		ret1.bot_right.y = ret1.top_left.y - base;
	
	
	return 0;
}

