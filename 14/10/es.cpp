#include <iostream>
#include <vector>

using namespace std;
/*
vector<int> merge(vector<int> a, vector<int> b){

	int i = 0;
	int k = 0;
	vector<int> z;
	
	while(i<a.size() && k<b.size()){
		if(a[i] < b[k]){
			z.push_back(a[i]);
			i++;
		}	
		else{
			z.push_back(b[k]);
			k++;
		}	
	}

	while(i<a.size()){
		z.push_back(a[i]);
			i++;
	
	}
	
	while(k<b.size()){
		z.push_back(b[k]);
		k++;
	}

	return z;
}


vector<int> mergesort(vector<int> v){

	if(v.size()<2) return v;
	
	if(v.size() ==2){
		if(v[1] < v[0]){
			int t = v[0];
			v[0] = v[1];
			v[1] = t;
			return v;
		}
	}

	
	vector<int> h1 = mergesort(vector<int>(v.begin(), v.begin()+v.size()/2));
	vector<int> h2 = mergesort(vector<int>(v.begin()+v.size()/2, v.end()));
	
	vector<int> z = merge(h1, h2);
	
	return z;

}*/

vector<int> merge(vector<int> a, vector<int> b){
	int i = 0;
	int k = 0;
	vector<int> v;
	while(i<a.size()&&k<b.size()){
	
		if(a[i] < b[k]){
			v.push_back(a[i]);
			i++;		
		}
		else{
			v.push_back(b[k]);
			k++;		
		}
	}
	while(i<a.size()){
		v.push_back(a[i]);
		i++;
	
	}
	
	while(k<b.size()){
		v.push_back(b[k]);
		k++;
	
	}

	return v;
}


vector<int> mergesort(vector<int> v){

	if(v.size()<2) return v;
	if(v.size() == 2){
		if(v[0] > v[1]){
			int t = v[0];
			v[0] = v[1];
			v[1] = t;		
		}
		return v;		
	}
	
	vector<int> h1 = mergesort(vector<int>(v.begin(), v.begin()+v.size()/2));
	vector<int> h2 = mergesort(vector<int>(v.begin()+v.size()/2, v.end()));
	
	return merge(h1, h2);
	

}

int main(){


	vector<int> v;
	for(int i=20; i>6; --i){
		v.push_back(i);
	}
	for(int i=0; i<v.size(); ++i)
		cout << v[i] << " ";
	cout << endl;
	vector<int> m = mergesort(v);
	
	for(int i=0; i<v.size(); ++i)
		cout << m[i] << " ";
		
	cout << endl;

}

