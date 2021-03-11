#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int N=10;

int main(){

	int v[N];
	int *p = v;
	srand(time(NULL));
	for(int i=0; i<N; ++i)
		v[i]=rand()%101;
		
	for(int i=0; i<N; ++i)
		cout << "-"<<*(p+i) << "-";
	cout << endl;

	for(int i=0; i<N; ++i){
		int smallInd = i;
		for(int k=i; k<N; ++k)
			if(*(p+k)<*(p+smallInd))
				smallInd=k;

	
		if(smallInd != i){
			int temp = *(p+i);
			*(p+i) = *(p+smallInd);
			*(p+smallInd)=temp;
		}
	}
	
	p=v;
	for(int i=0; i<N; ++i)
		cout << "-"<<*(p+i) << "-";
	cout << endl;
	

}
