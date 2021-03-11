#include <iostream>
#include <vector>
#include <string>

using namespace std;

void readVector(vector<int>&); 

void printVector(const vector<int>&);

vector<int> insert(vector<int>, int, int);

int main()
try{

	vector<int> v;
	
	readVector(v);
	vector<int> w(insert(v, 9, 1000));
	printVector(w);
	
}
catch(int err){
	cout << err << endl;
}

vector<int> insert(vector<int> v, int i, int val){
	
	if(i>v.size()){
		int err=-1;
		throw err;
	}
	
	v.push_back(v.back());
	for(int k=v.size()-2; k>i; --k)
		v[k]=v[k-1];
		
	v[i]=val;
	
	return v;

}

void printVector(const vector<int> &v){
	for(int i=0; i<v.size(); ++i)
		cout << v.at(i) << " ";
	cout << endl;

}

void readVector(vector<int>& v) {

	string input;
	cin >> input;
	
	while(input != "y"){
		try{
			int val = stoi(input);
			v.push_back(val);
			
		}
		catch(exception &e){
			cerr << "inserimento non valido\n";
		}
		
		cin >> input;
	}

	/*
	cout << "Inserisci la dimensione della sequenza: ";
	int N;
	cin >> N;

	for(int i=0; i<N; ++i){
		int a;
		cin >> a;
		v.push_back(a);
	}
	*/
}
