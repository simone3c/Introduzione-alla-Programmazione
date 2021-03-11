#include <iostream>
#include <vector>
#include <string>

using namespace std;

void readVector(vector<int>&); 

int SequentialSearch_vector(const vector<int>&, int);

int main(){

	vector<int> v;
	
	readVector(v);
	cout << SequentialSearch_vector(v, 8);
	
}

int SequentialSearch_vector(const vector<int> &v, int item){
	int loc=-1;
	int found = false;
	int i=0;
	while(!found && i!=v.size()){
		if(v[i] == item){
			found = true;
			loc = i;
		}
		++i;
	
	}
	
	return loc;
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
