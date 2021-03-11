#include <iostream>
#include <cmath>
using namespace std;

const double TOLL = 0.00001;

struct Time{
	unsigned int sec;
	unsigned int min;
	unsigned int ore;
};

int main(){

	Time T1, T2;
	
	cout << "Inserisci le ore del primo orario: ";
	cin >> T1.ore;
	
	cout << "Inserisci i minuti del primo orario: ";
	cin >> T1.min;
	
	cout << "Inserisci i secondi del primo orario: ";
	cin >> T1.sec;

	if(T1.ore>=0 && T1.ore<24 && T1.min>=0 && T1.min<60 && T1.sec>=0 && T1.sec>60){
			cout << "ERRORE NEL PRIMO ORARIO!";
			return -1;
	}
	
	cout << "Inserisci le ore del secondo orario: ";
	cin >> T2.ore;
	
	cout << "Inserisci i minuti del secondo orario: ";
	cin >> T2.min;
	
	cout << "Inserisci i secondi del secondo orario: ";
	cin >> T2.sec;
	
	if(T2.ore>=0 && T2.ore<24 && T2.min>=0 && T2.min<60 && T2.sec>=0 && T2.sec>60){
			cout << "ERRORE NEL PRIMO ORARIO!";
			return -2;
	}
	
	int T1_to_sec = T1.ore*3600 + T1.min*60 + T1.sec;
	int T2_to_sec = T2.ore*3600 + T2.min*60 + T2.sec;
	
	int diff_in_sec = abs(T1_to_sec-T2_to_sec);
	
	int diff_ore = diff_in_sec/3600;
	int diff_min = (diff_in_sec%3600) / 60;
	int diff_sec = (diff_in_sec%3600) % 60;
	
	cout << "sono passate: " << diff_ore << " ore e " << diff_min << " minuti e " << diff_sec << " secondi" << endl;
		
		
		
		
	return 0;
}

