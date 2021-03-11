#include <iostream>

using namespace std;

const int rows=4;
const int col=3;

struct array2d{
	int R;
	int C;
	int mat[rows][col];

};


void readMat(array2d&);

int main(){

	array2d m;
	m.R=rows;
	m.C=col;
		
	readMat(m);
	
	for(int i=0; i<m.R; ++i){
		for(int k=0; k<m.C; ++k)
			cout << m.mat[i][k] << " ";
		cout << endl;
	}

}

void readMat(array2d &m){
	for(int i=0; i<m.R; ++i)
		for(int k=0; k<m.C; ++k)
			cin >> m.mat[i][k];
}
