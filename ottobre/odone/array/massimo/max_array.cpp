#include <iostream>
#include <climits>
using namespace std;

const int DIM = 10;

int main(){

	int a[DIM]{1,2,3,4,50,60,7,8,9,20};
	int ind;
	int max=INT_MIN; //numero molto piccolo che viene sicuramente sostituito da a[0] nel primo if

	for(int i=0; i<DIM; ++i){
		if(a[i]>max){
			ind = i;
			max = a[i];
		}
	}

	cout << max << " con indice " << ind << endl;

	return 0;
}
