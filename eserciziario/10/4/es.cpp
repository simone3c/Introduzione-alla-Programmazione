#include <iostream>
#include <vector>
#include <string>

using namespace std;

void readVector(vector<int>&); 

void print(vector<int> &);

vector<int> reverse(vector<int>);

int main(){

	vector<int> v;
	
	readVector(v);
	print(v);
	vector<int> w=reverse(v);
	print(w);
	
}

vector<int> reverse(vector<int> v){

	vector<int> rev(v.size());
	
	for(int i=0; i<v.size(); ++i)
		rev[i] = v[v.size()-1-i];
		
	return rev;


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
