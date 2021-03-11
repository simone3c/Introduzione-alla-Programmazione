#include <iostream>
#include <vector>
#include <string>
#include "phone_book.h"

using namespace std;



int main(){

	Rubrica rubrica;
	
	input_rubrica(rubrica);
	
	//print_rubrica(rubrica);
	
	sort_surnames(rubrica);
	
	//print_rubrica(rubrica);
	

	print_rubrica(rubrica);
	cout << "......:";
	//add_ord(rubrica, "bobo", "olivieri", "444");
	print_rubrica(rubrica);

}















