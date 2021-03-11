#include <iostream>
#include <climits>
using namespace std;

int main(){
	
	const int N = 10;
	
	int v[N]{};
	int max=INT_MIN;
	int count = 0;
	
	for(int i=0; i<N; ++i){
		
		int val;
		cout << "Inserisci un valore: ";
		cin >> val;
		
		v[i]=val;
	}
	
	for(int i=0; i<N; ++i){
		if(v[i]>max){
			count = 1;
			max = v[i];
		}
		else if(v[i]==max)
			count++;		
	
	}
			
	/*for(int i=0; i<N; ++i)
		if(v[i]==max)
			count++;*/
			
	cout << "Il massimo è: " << max << " con " << count << " ricorrenze\n";

	return 0;
}
