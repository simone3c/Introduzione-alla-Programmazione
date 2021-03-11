#include<iostream>
#include <vector>

using namespace std;

void print(const vector<int> &v1){
	for(int i=0; i<v1.size(); ++i)
		cout << v1.at(i) << " ";
	cout << endl;
}

int main()
try{

	vector<int> v; // v è vuoto
	
	//cout << v.at(2); // gestisce errori tipo out of range
	//cout << v[0]; // NON gestise errori e il programma crasha con un errore
	//cout << v.front(); // NON gestisce errori tipo out of range
	//cout << v.back(); // NON gestisce errori tipo out of range
	
	vector<int> v1(10, 8);
	cout << v1.back() << endl;
	
	print(v1);

}
catch(...){
	cerr << "errror\n";
}
