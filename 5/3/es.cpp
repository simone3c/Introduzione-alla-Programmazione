#include <iostream>
#include <cmath>
using namespace std;

const double TOLL = 0.001;

struct retta{
	double m;
	double q;
};

struct punto{
	double x;
	double y;
};

int main(){

	cout << "Inserire i parametri della retta r (m e q): ";
	retta r;
	cin >> r.m >> r.q;
		
	cout << "Inserire le coordinate del punto P: ";
	punto p;
	cin >> p.x >> p.y;
	
	cout << "La retta R di equazione y="<<r.m<<"x+"<<r.q;
	
	if(fabs(p.y-((r.m*p.x)+r.q))<TOLL)
		cout << " passa";
	else
		cout << " non passa";
		
	cout << " per il punto di coordinate " << p.x << " e " << p.y << endl;
	
	
	return 0;
}

