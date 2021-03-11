#include <iostream>
#include <vector>
#include <string>

using namespace std;

void readVector(vector<int>&); 

void printVector(const vector<int>&);

bool is_in_vector(const vector<int> &, int );

vector<int> reverse(const vector<int>);

void reverse_inplace(vector<int>&);

vector<int> cat(vector<int>, vector<int>);

void pop_front(vector<int> &);

int main()
try{

	vector<int> source;
	
	readVector(source);

	//cout << boolalpha << is_in_vector(source, 5) << endl;
	
	vector<int> w (reverse(source)); // costruttore copia
	printVector(source);
	printVector(w);
	cout << "---\n";
	reverse_inplace(w);
	printVector(w);
	
	vector<int> somma;
	somma = cat(source, w);
	cout << "Concatenazione: ";
	printVector(somma);
	
}
catch(...){
	cout << "errore\n" << endl;
}

void pop_front(vector<int> &v){ 
// segue il principio FIRST IN FIRST OUT (FIFO) in cui elimino
// il primo elemento inserito e non l ultimo come con pop_back()

	for(int i=1; i<v.size(); ++i)
		v.at(i-1)=v.at(i);
	
	v.pop_back(); // riduco la size

}

vector<int> cat(vector<int> a, vector<int> b){

	vector<int> res(a);
	
	for(int i=0; i<b.size(); ++i)
		res.push_back(b.at(i));
		
	return res;

}

void reverse_inplace(vector<int> &v){
	for(int i=0; i<v.size()/2; ++i){
		int temp = v.at(i);
		v.at(i)= v.at(v.size()-1-i);
		v.at(v.size()-1-i) = temp;
	
	
	}
}

vector<int> reverse(const vector<int> src){
	vector<int> rev(src.size());//stessa dimensione di src
	
	for(int i=0; i<src.size(); ++i)
		rev.at(src.size()-1-i) = src.at(i);
	return rev;
}

bool is_in_vector(const vector<int> &v, int item){
	for(int i=0; i<v.size(); ++i)
		if(v.at(i) == item)
			return true;

	return false;
}



void printVector(const vector<int> &v){
	for(int i=0; i<v.size(); ++i)
		cout << v.at(i) << " ";
	cout << endl;

}

void readVector(vector<int>& v) {
	cout << "Inserisci i valori da inserire, y per smettere\n";
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
