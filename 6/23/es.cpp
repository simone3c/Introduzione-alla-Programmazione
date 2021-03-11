/*
	EVAPORATORE 
*/
#include <iostream>
#include <cmath>
using namespace std;

void evap(float, int, float, int&);

int main(){

	int lt=10;
	int giorni = 0;
	evap(lt, 10, 1, giorni);
	cout << giorni << endl;

 	return 0;
}

void evap(float lt, int perc, float min, int &giorni){

	float lt_attuali=lt;
	
	while(lt_attuali>=min){
		giorni++;
		lt_attuali *= (100-perc)/100.0;
	}
	
}
