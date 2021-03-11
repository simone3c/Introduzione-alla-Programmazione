#include <iostream>

using namespace std;


const int R = 4;
const int C = 17;

void shift(char v[R][C]){

	for(int i=0; i<R; ++i){
		char t = v[i][C-1];
		for(int k=C-1; k>0; --k)
			v[i][k] = v[i][k-1];
		
		v[i][0] = t;	
	}
}

void print(char v[R][C]){
	
	for(int i=0; i<R; ++i){
		for(int k=0; k<C; ++k)
			cout << v[i][k];
		cout << endl;
	}
}




int main(){

	char sign[R][C] {{'-','0','0','0','-','0','-','-','0','0','-','-','0','0','0','0','-'},
									 {'0','-','-','-','-','0','-','0','-','-','0','-','0','-','-','0','-'},
									 {'0','-','-','-','-','0','-','0','0','0','0','-','0','-','-','0','-'},
									 {'-','0','0','0','-','0','-','0','-','-','0','-','0','0','0','0','-'}
									};

	for(int i=0; i<20; ++i){
		print(sign);
		shift(sign);

		cout << endl << endl;
	}	


}
