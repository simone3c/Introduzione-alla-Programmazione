#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

vector<int> primes(int);

vector<bool> crivello(int);
int main(){

	vector<int> a = primes(100);
	
	for(int i=2; i<a.size(); ++i){
		cout << a[i] << endl;
	}
 	cout << endl;

}

vector<int> primes(int n){
	
	vector<bool> booleano = crivello(n);
	vector<int> res;
	
	for(int i=0; i<booleano.size(); ++i)
		if(booleano[i] == true)
			res.push_back(i);

	return res;
	
}

vector<bool> crivello(int n){

	vector<bool> res(n, true);
	int p=2;
	bool flag = true;
	
	while(flag){
		flag=false;
		
		for(int i=p+1; i<n; ++i)
			if(i%p==0)
				res[i]=false;
				
		for(int i=p+1; i<n; ++i){
			if(res[i]==true){
				p=i;
				flag=true;
				break;
			}
		}
	}

	return res;

}

