#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
const int N=20;
int main(){

	int v[N];
	srand(time(NULL));
	for(int i=0; i<N; ++i)
		v[i]=rand()%101;
	
	for(int i=0; i<N; ++i){
	
		int bigInd=i;
		for(int k=i; k<N; ++k)
			if(v[k]>v[bigInd])
				bigInd=k;
		
		if(bigInd != i){
			int temp=v[i];
			v[i] = v[bigInd];
			v[bigInd] = temp;
		}
	}
	
	for(int i=0; i<N; ++i)
		cout << "-"<<v[i]<<"-";
	cout << endl;

}

