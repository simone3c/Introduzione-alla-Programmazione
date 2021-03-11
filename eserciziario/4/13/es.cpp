//stampa la freq di ogni num nell arry

#include <iostream>

using namespace std;

const int N =6;

int main() {

	//INIZIALIZZAZIONE
	int a[N];
	int c[N];
	for (unsigned int i=0; i<N; i++) {
		cout << "Valorizza il valore n. " << i << " :" ;
		cin >> a[i];
		c[i]=0;
	}
	
	//CALCOLO FREQUENZA VALORI
	for (unsigned int i=0; i<N; i++) {
		for (unsigned int j=0; j<N; j++) {
			if(a[j]==a[i]){
				if (c[j]!=0)
					break;
				c[i]++;
			}
		}
		for(int x=0; x<N; ++x)
			cout << c[x] << "-";
		
		cout << endl;
	}
	
	//OUTPUT
	for (unsigned int i=0; i<N; i++) {
	//if (c[i]!=0)
		cout << "Il valore "  << c[i] << " volte nell'array" << endl;
	}
	
	
}

