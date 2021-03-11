#include <iostream>

using namespace std;

int main(){
	
	
	int m[4][3];
	
	for(int i=0; i<4; ++i)
		for(int k=0; k<3; ++k)
			m[i][k] = i-k;
			
	cout << "Matrice statica:\n";
	for(int i=0; i<4; ++i){
		for(int k=0; k<3; ++k)
			cout << m[i][k] << "\t";
		cout << endl;
	}
	
	int *p;
	p = &m[0][0];
	cout << "Visita con ptr:\n";
	for(int i=0; i<4; ++i){
		for(int k=0; k<3; ++k)
			cout << *(p+3*i+k) << "\t";
		cout << endl;
	}
	
	/*
	int *p = new int [10]{0};
	for(int i=0; i<10; ++i)
		cout << *(p+i) << endl;
	*/
	
	
}





