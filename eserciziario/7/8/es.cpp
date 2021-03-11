#include <iostream>

using namespace std;

const int N = 5;

int main(){

	int a[N]{5,0,200,100,0};
	int b[N]{10,7,199,66,300};
	int v[2*N];
	
	for(int i=0; i<N; ++i){
		int smallInd=i;
		for(int k=i; k<N; ++k)
			if(a[k]<a[smallInd])
				smallInd = k;
				
		if(smallInd!=i){
			int temp=a[i];
			a[i] = a[smallInd];
			a[smallInd] = temp;
		}
	}
	
	for(int i=0; i<N; ++i){
		int smallInd=i;
		for(int k=i; k<N; ++k)
			if(b[k]<b[smallInd])
				smallInd = k;
				
		if(smallInd!=i){
			int temp=b[i];
			b[i] = b[smallInd];
			b[smallInd] = temp;
		}
	}
	
	//0,0,2,5,12
	//3,7,10,15,66
	
	int empty=0;
	int lastB = 0;
	for(int i=0; i<N; ++i){
		for(int k=lastB; k<N; ++k){
			if(b[k]>a[i]){
				break;
			}
			else{
				v[empty] = b[k];
				empty++;
				lastB=k+1;
			}
		}
		v[empty] = a[i];
		empty++;
	}
	
	for(int k=lastB; k<N; ++k){
		if(b[k]>a[N-1]){
			v[empty]=b[k];
			empty++;
		}
	}
	
	for(int i=0; i<2*N; ++i)
		cout << "-" << v[i] << "-";
	
	
	
	
}
