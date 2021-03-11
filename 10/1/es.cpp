#include <iostream>
#include <vector>
#include <string>

using namespace std;

void readVector(vector<int>&); 

void printVector(const vector<int>&);

int main(){

	vector<int> v;
	
	readVector(v);
	printVector(v);
	
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
