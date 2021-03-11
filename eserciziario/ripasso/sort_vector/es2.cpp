#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void sel_sort(vector<int>& v){

	
}

void print(vector<int>& v, int size){
	
	if(size==0) return;
	
	print(v, size-1);
	cout << v[size-1] << " ";

}

vector<int> merge(vector<int> a, vector<int> b){

	int i=0;
	int k=0;
	vector<int> z;
	while(i<a.size() && k<b.size()){
		if(a[i] > b[k]){
			z.push_back(a[i]);
			++i;
		}
		else{
			z.push_back(b[k]);
			++k;				
		}
	
	}

	while(i<a.size()){
		z.push_back(a[i]);
		++i;
	}
	while(k<b.size()){
		z.push_back(b[k]);
		++k;
	}

	return z;	
}

vector<int> mergesort(vector<int> v){

	if(v.size() <2) return v;
	if(v.size()==2){
		if(v[0]<v[1]){
			int t = v[0];
			v[0] = v[1];
			v[1] = t;
		}
		return v;
	}	

	vector<int> h1 = mergesort(vector<int>(v.begin(), v.begin() + v.size()/2));
	vector<int> h2 = mergesort(vector<int>(v.begin()+v.size()/2, v.end()));
	
	return merge(h1, h2);
}



int main(){
	srand(time(NULL));
	vector<int> v;
	
	for(int i = 10; i>0; --i)
		v.push_back(rand()%50);
		
	vector<int> r = mergesort(v);
	print(r, v.size());
	cout << endl;




}

