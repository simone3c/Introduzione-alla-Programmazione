//verfica di array palindromo

#include <iostream>

using namespace std;

const int DIM =10;

int main(){
	
	int v[DIM]{1,2,3,4,5,5,4,3,2,1};

	bool pal=true;
	
	for(int i=0; i<DIM/2; ++i)
		if(v[i]!=v[DIM-i-1])
			pal=false;

	cout << boolalpha << pal << endl;

	return 0;
}
