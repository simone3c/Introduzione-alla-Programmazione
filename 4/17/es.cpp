//inverte l ordine dei valori in place

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int DIM =10;

int main(){
	
	float v[DIM];
	srand(time(NULL));
	
	for(int i=0; i<DIM; ++i)
		v[i]=(rand()%101)+0.1;
	
	cout << "L'array iniziale è\n";
	for(int i =0; i<DIM; ++i)
		cout << "-" << v[i] << "-";

	for(int i=0; i<DIM/2; ++i){
		float temp=v[i];
		v[i]=v[DIM-i-1];
		v[DIM-i-1]=temp;
	}
	
	cout << "\nL'array invertito è\n";
	for(int i =0; i<DIM; ++i)
		cout << "-" << v[i] << "-";
		
	cout << endl;

	return 0;
}
