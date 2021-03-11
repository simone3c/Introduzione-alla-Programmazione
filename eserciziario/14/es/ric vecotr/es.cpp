// raccio rec add in order e rm sui vector
#include <iostream>
#include <vector>
using namespace std;

bool rec_insert(vector<int>& v, int x, int pos){
	if(pos==v.size()){
		v.push_back(x);
		return true;
	}

	if(v[pos] == x) return false;
	
	if(v[pos] > x){
		v.resize(v.size()+1);
		for(int i= v.size()-1;i>=pos; --i)
			v[i+1] = v[i];
			
		v[pos] = x;
		return true;
	}
	
	return rec_insert(v, x, pos+1);
		
}

bool rec_rm(vector<int>& v, int x, int pos){
	if(pos == v.size()) return false;
	
	if(v[pos] == x){
	
		for(int i=pos+1; i<v.size(); ++i)
			v[i-1] = v[i];
			
		v.resize(v.size()-1);
		return true;
	}
	
	return rec_rm(v, x, pos+1);

}

void rec_rev(int v[], int size, int pos){

	if(size <= pos) return;
	
	int t = v[pos];
	v[pos] = v[size-1];
	v[size-1] = t;
		
	rec_rev(v, size-1, pos+1);
	
}

void reverse(int v[], int size){
	rec_rev(v, size, 0);

}

void rec_print(int v[], int size){

	if(size==0) return;
	
	rec_print(v, size-1);
	cout << v[size-1] << " ";

}

const int N = 8;
int main(){

	vector<int> v;
	
	for(int i=0; i< 10; ++i)
		v.push_back(i*i);
		
	cout << boolalpha << rec_insert(v, 111, 0) << endl;
	
	for(int i=0; i<v.size(); ++i)
		cout << v[i] << " ";
		
	cout << endl;
	
	rec_rm(v, 111, 0);
	for(int i=0; i<v.size(); ++i)
		cout << v[i] << " ";
		
	cout << endl;
	
	int l[N]{1,2,3,4,5,6,7, 8};
	
	reverse(l, N);
	
	rec_print(l, N);
	cout << endl;
	
	

}
