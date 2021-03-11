// SELECTION SORT
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int DIM = 10;

int main(){
	
	int v[DIM];
	
	srand(time(NULL));
	for(int i=0; i<DIM; ++i)
		v[i]=rand()%101;

	for(int i=0; i<DIM; ++i){
		int ind=i;
		for(int k=i; k<DIM; ++k)
			if(v[k]<v[ind])
				ind=k;
				
		//swap
		int temp=v[i];
		v[i]=v[ind];
		v[ind]=temp;
	}
	
	
	cout << "L'array ordinato in modo crescente è\n";
	for(int i =0; i<DIM; ++i)
		cout << "-" << v[i] << "-";
		
	cout << endl;

	return 0;
}
