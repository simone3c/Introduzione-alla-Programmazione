#include <iostream>
#include <string>
using namespace std;

int c(string s){
	if(s.size()==0) return 0;
	bool isV = (s.back()=='a' || s.back()=='e' || s.back()=='i' || s.back()=='o' || s.back()=='u'); 
	s.pop_back();
	return isV + c(s);

}

int main(){

	string a = "qqqe1ee";
	cout << c(a) << endl;

}
