#include <iostream>
#include <string>

using namespace std;

const string s1 = "Prima scelta";
const string s2 = "seconda scelta";
const string s3 = "terza scelta";
const string s4 = "quarta scelta";


void print_menu(string, string, string, string);
void print_choice(int, string, string, string, string);
int get_choice(int);
int use_menu(string ch1, string ch2, string ch3, string ch4);

int main(){

	use_menu(s1, s2, s3, s4);
	
	

}

void print_menu(string choice1, string choice2, string choice3, string choice4){

	cout << "1\t" << choice1 << endl;
	cout << "2\t" << choice2 << endl;
	cout << "3\t" << choice3 << endl;
	cout << "4\t" << choice4 << endl;
}

void print_choice(int n, string ch1, string ch2, string ch3, string ch4){

	cout << "scelta effettuata: ";
	switch(n){
		case 1:
			cout << ch1;
			break;
		case 2:
			cout << ch2;
			break;
		case 3:
			cout << ch3;
			break;
		default:
			cout << ch4;
			
	}
	cout << endl;
}

int get_choice(int n){

	int a=0;
	while(a<1 || a>n){
		
		cout << "Inserisci una scelta fra 1 e " << n << endl;
		cin >> a;
	}
	return a;
}

int use_menu(string ch1, string ch2, string ch3, string ch4){

	print_menu(s1, s2, s3, s4);
	int n = get_choice(4);
	print_choice(n, ch1, ch2, ch3, ch4);

	return n;
}


















