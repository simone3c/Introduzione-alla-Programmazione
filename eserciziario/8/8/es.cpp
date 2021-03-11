#include <iostream>

using namespace std;

const int N=7;

int main(){

	char v[N]{'a', '1', 'a','5','0', 'p', 'P'};
	char *p = &v[0];
	int tot=0;
	for(int i=0; i<N; ++i){
		if(*p>='0' && *p<='9')
			tot++;
		p++;
	}
	
	cout << "Ci sono "<< tot << " cifre" << endl;
}
