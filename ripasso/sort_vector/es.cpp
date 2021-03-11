#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void sel_sort(vector<int>& v){

	for(int i=0; i<v.size(); ++i){
		int smallind = i;
		for(int k=i+1; k<v.size(); ++k)
			if(v[k] < v[smallind])
				smallind = k;
				
		if(smallind != i){
		
			int t=v[i];
			v[i] = v[smallind];
			v[smallind] = t;
		}
	}
}

void swap(int&a, int&b){
	int t = a; 
	a=b;
	b=t;
}

void print(vector<int>& v, int size){
	
	if(size==0) return;
	
	print(v, size-1);
	cout << v[size-1] << " ";

}

vector<int> merge(vector<int> a, vector<int> b){
	
	vector<int> z;
	int i=0;
	int k=0;
	
	while(i<a.size() && k<b.size()){
		if(a[i] < b[k]){
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

	if(v.size() < 2) return v;
	if(v.size() == 2){
		if(v[0] > v[1]){
			swap(v[0], v[1]);
			return v;
		}
	}
	
	vector<int> h1 = mergesort(vector<int>(v.begin(), v.begin()+v.size()/2));
	vector<int> h2 = mergesort(vector<int>(v.begin()+v.size()/2, v.end()));
	
	return merge(h1, h2);
}

int main(){
	srand(time(NULL));
	
	vector<int> v;
	for(int i=0; i<10; ++i)
		v.push_back(rand()%100);
		
	v.push_back(200);
	
	print(v, v.size());
	cout << endl;
	
	cout << "merge:     ";
	vector<int> m = mergesort(v);
	print(m, m.size());
	cout << endl;
	
	cout << "selection: ";
	sel_sort(v);
	print(v, v.size());
	cout << endl;

}
