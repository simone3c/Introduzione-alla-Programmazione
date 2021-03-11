#include <iostream>
#include <cmath>
using namespace std;

const double TOLL = 0.001;

struct Point{
	double x;
	double y;
};

int main(){

		Point p1, p2;
		
		cout << "Inserisci x e y del primo punto: ";
		cin >> p1.x >> p1.y;
		
		cout << "Inserisci x e y del secondo punto: ";
		cin >> p2.x >> p2.y;
		
		if(fabs(p1.x-p2.x)<TOLL && fabs(p1.y-p2.y)<TOLL)
			cout << "I punti sono uguali" << endl;
		else{
			cout << "Il secondo punto è ";
			if(p2.y>p1.y)
				cout << "In alto ";
			else
				cout << "In basso ";
			if(p2.x>p1.x)
				cout << "a destra";
			else
				cout << "a sinistra";
		
			cout << " rispetto al primo" << endl;
		}
		
		double dist = sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
		
		cout << "La distanza è: "<< dist << endl;
		
		
}

