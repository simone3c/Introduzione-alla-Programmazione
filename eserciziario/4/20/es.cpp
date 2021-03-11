#include <iostream>

using namespace std;

int main(){

	const int N = 10;
	
	int mat[N*(N+1)/2];
	int a;
	int b;
	int fatt1=1;
	int fatt2=1;
	int cont_cambio=10;
	
	for(int i=1; i<=N*(N+1)/2; ++i){

		if(cont_cambio==0){
			fatt2++;
			fatt1=fatt2;
			cont_cambio=10-fatt2+1;
		}
		
		mat[i-1] = fatt1*fatt2;
		
		cont_cambio--;
		fatt1++;
		
	}
	
	for(int i=0; i<N*(N+1)/2; ++i){
		cout << mat[i]<<" ";
	}

	cout << "Inserisci due valori tra 1 e 10: ";
	cin >> a>> b;
	
	cout << a-- << "*" << b-- << " = " << mat[N*a+b-a] << endl;
	

	return 0;
}
