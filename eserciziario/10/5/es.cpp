#include <iostream>
#include <vector>
#include <string>

using namespace std;

void readVector(vector<int>&); 

void print(vector<int> &);

vector<int> cat(vector<int>, vector<int>);

int main(){

	vector<int> v;
	vector<int> a;
	
	readVector(v);
	readVector(a);
	
	vector<int> w=cat(v, a);
	print(w);
	
}

vector<int> cat(vector<int> a, vector<int> b){

	vector<int> tot(a);
	
	for(int i=0; i<b.size(); ++i)
		tot.push_back(b[i]);
	
	return tot;

}


void print(vector<int> &v){
	for(int i=0; i<v.size(); ++i)
		cout << v[i] << " ";
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
