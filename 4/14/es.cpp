//stampa il secondo più grande

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int DIM =10;

int main(){
	
	int v[DIM];
	
	srand(time(NULL));
	for(int i=0; i<DIM; ++i)
		v[i]=rand()%101;
		
	
	//selection sort in ordine decrescente
	for(int i=0; i<DIM; ++i){
		int ind=i;
		for(int k=i+1; k<DIM; ++k){
			if(v[k]>v[ind]){
				ind = k;
			}
		}
		
		if(ind>i){
			int temp=v[i];
			v[i]=v[ind];
			v[ind]=temp;
		
		}
	}

	for(int i=0; i<DIM; ++i)
		cout << "-"<<v[i]<<"-";
	cout << endl;
	
	int max=v[0];
	int max2=max;
	int i=1;
	while(max2==max && i<DIM)
		if(v[i++]<max)
			max2=v[i-1];
	
	cout <<"Il secondo più grande è: " << max2 << endl;

	return 0;
}
