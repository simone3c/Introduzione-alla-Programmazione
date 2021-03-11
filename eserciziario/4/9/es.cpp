#include <iostream>

using namespace std;

int main(){

	const int N = 1000;
	
	bool isPrime[N];
	int p=2;
	bool flag=true;
	
	for(int i=0; i<N; ++i)
			isPrime[i]=true;
	
	while(flag){
		flag=false;
		
		for(int i=p+1; i<N; ++i)
			if(i%p==0)
				isPrime[i]=false;
				
		for(int i=p+1; i<N; ++i){
			if(isPrime[i]==true){
				p=i;
				flag=true;
				break;
			}
		}
	}
	
	cout << "sono primi: ";

	for (int i=0; i<N; ++i){
	
		if(isPrime[i]==true)
			cout << i << endl;
	
	}

	return 0;
}
