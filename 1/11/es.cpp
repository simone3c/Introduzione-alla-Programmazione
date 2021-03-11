//stampo area e circonferenza di un cerchio dopo aver ricevuto i dati necessari

#include <iostream>

using namespace std;

int main(){
	
	const float PI = 3.1415926535897932;
	float r;
	
	cout << "Inserisci il raggio: ";
	cin >> r;
	
	float circ = 2*PI*r,
			  area = PI*r*r;
			  
	cout << "L'area vale: " << area << " \nla circonferenza vale: " << circ << endl;
	
	

	return 0;
}
