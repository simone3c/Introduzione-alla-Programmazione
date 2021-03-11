#include <iostream>
#include <vector>
using namespace std;


const int N=10;

int bs(vector<int> v, int x, int first, int last){
	if(first > last) return -1;
	
	int mid=(last+first)/2;
	if(v[mid] == x) return mid;
	
	if(x<v[mid]) return bs(v, x, first, mid-1);
	else return bs(v, x, mid+1, last);
	
}

void binary(vector<int> v, int x){

	cout << "l elemento è nell'array all'indice: " << bs(v, x, 0, v.size()-1);

}

int bs2(int v[], int x, int first, int last){

	if(first > last) return -1;
	int mid=(last+first)/2;
	if(v[mid] == x) return mid;
	
	if(x<v[mid]) return bs2(v, x, first, mid-1);
	else return bs2(v, x, mid+1, last);

}

void bin2(int v[], int x){

	cout << "l elemento è nell'array all'indice: " << bs2(v, x, 0, N-1);

}


int main(){

	vector<int> v;
	
	for(int i=0; i<N; ++i)
		v.push_back(i*i);
		
	binary(v, 16);
	cout << endl;

	int c[N];
	for(int i=0; i<N;++i)
		c[i] = i;
		
	bin2(c, 9);
	cout << endl;


}
