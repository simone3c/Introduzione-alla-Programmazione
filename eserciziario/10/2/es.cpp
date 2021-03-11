#include <iostream>
#include <vector>
#include <string>

using namespace std;

void readVector(vector<int>&); 

void print(vector<int> &);

void sort(vector<int> &);

int main(){

	vector<int> v;
	
	readVector(v);
	sort(v);
	print(v);
	
}

void sort(vector<int> &v){

	for(int i=0; i<v.size(); ++i){
		int smallInd=i;
		for(int k=i; k<v.size(); ++k)
			if(v[k] < v[smallInd])
				smallInd = k;
		
		if(smallInd !=i){
			int temp = v[i];
			v[i] = v[smallInd];
			v[smallInd] = temp;
		}
	}
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
