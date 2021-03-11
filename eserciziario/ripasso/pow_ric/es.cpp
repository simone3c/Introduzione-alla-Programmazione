#include <iostream>

using namespace std;

int p(int a, int b){
	if(a<0 || b<0){
		string s="errore";
		throw s;
	}
	
	if(b==0) return 1;
	
	return a*p(a, b-1);

}

int main(){
	cout << p(10, 4);
}
