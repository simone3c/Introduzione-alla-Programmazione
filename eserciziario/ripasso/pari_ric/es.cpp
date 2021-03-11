#include <iostream>
#include <vector>
using namespace std;

int pari(int v[], unsigned int size){

	if(size==0) return 0;
	return (v[size-1]%2==0)+ pari(v, size-1);
	
}

int pari_vector(vector<int> v){

	if(v.size()==0) return 0;
	bool isP = (v.back()%2==0);
	v.pop_back();
	return isP + pari_vector(v);

}



int main(){
	
	int v[5]{1,2,3,4,5};
	vector<int> z(5, 10);
	cout << pari(v, 5) << " " << pari_vector(z) << endl;

}



