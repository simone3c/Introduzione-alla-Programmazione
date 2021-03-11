#include <iostream>

using namespace std;

char* fun(char &a, char &b, char &c);

int main(){
	char a='c';
	char b='a';
	char c='t';

	cout << static_cast<void*>(fun(a, b, c)) << endl;;
	
	
}

char* fun(char &a, char &b, char &c){

	char *p = nullptr;
	short ans;
	cout << "Scegli 1, 2 o 3? " << endl;
	cin >> ans;
	
	if(ans == 1){
		p = &a;
	}
	else if(ans==2){
		p = &b;
	}
	else{
		p = &c;
	}
	
	return p;
	
}
