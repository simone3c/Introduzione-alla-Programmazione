//stampa il secondo più grande

#include <iostream>
#include <climits>
using namespace std;

const int DIM =5;

int main(){
	
	int v[DIM];
	int sort[DIM];
	
	for(int i=0; i<DIM; ++i){
		cout << "Inserisci un numero: ";
		cin >> v[i];
	}
	
	int val;
	
	for(int i=0; i<DIM; ++i){
		
		int ind=i;
		
		for(int k=i+1; k<DIM; ++k)
			if(v[k]<v[ind])
				ind=k;

		if(ind>i){
			int temp=v[i];
			v[i]=v[ind];
			v[ind]=temp;
			
		}
		
		sort[i]=v[i];
		
	}
	
	cout << "L'array ordinato in modo crescente è\n";
	for(int i =0; i<DIM; ++i)
		cout << "-" << sort[i] << "-";
		
	cout << endl;

	return 0;
}
