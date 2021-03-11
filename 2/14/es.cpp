#include <iostream>
#include <cmath>

using namespace std;

int main(){

	float a, b, c;
	
	cout << "Inserisci a, b, c separati da uno spazio: ";
	cin >> a >> b >> c;
	float delta = b*b - 4*a*c; 
	
	if(a == 0)
		cout << "ERRORE non è una parabola";
	
	// radici complesse soluz = (-b/2a) +/- i(sqrt(4ac-b^2)/2a)
	// p1 = (-b/2a)
	// p2 = (sqrt(4ac-b^2)/2a)
	else if(delta<0){
	float p1 = -b/2*a;
	float p2 = (sqrt(4ac-b^2)/2*a);
		cout << "Le soluzioni sono complesse e sono:\n\ts1: " <<
				p1 << " + i( " << p2 << " )\n\ts2: " <<
				p1 << " - i( " << p2 << " )" << endl;

	}
	
	// radici reali
	else{
		float s1, s2;
		s1 = (-b+sqrt(delta))/2*a;
		s2 = (-b-sqrt(delta))/2*a;
		
		cout << "Le soluzioni sono reali e sono:\n\ts1: " << s1 << "\n\ts2: " << 
				s2 << endl;
		
	}

	return 0;
}
