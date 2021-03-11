#include <iostream>
#include <cmath>
using namespace std;

const double TOLL = 0.00001;

struct Point{
	int x;
	int y;
};

struct Triangle{
	Point v1;
	Point v2;
	Point v3;
	double per;
	double area;
};

int main(){

		Triangle t;
		
		cout << "Inserisci x e y del primo punto: ";
		cin >> t.v1.x >> t.v1.y;
		
		cout << "Inserisci x e y del secondo punto: ";
		cin >> t.v2.x >> t.v2.y;
		
		cout << "Inserisci x e y del terzo punto: ";
		cin >> t.v3.x >> t.v3.y;
		
		double l1=sqrt(pow(t.v2.x - t.v1.x ,2)+pow(t.v2.y - t.v1.y ,2));
		double l2=sqrt(pow(t.v3.x - t.v2.x ,2)+pow(t.v3.y - t.v2.y ,2));
		double l3=sqrt(pow(t.v3.x - t.v1.x ,2)+pow(t.v3.y - t.v1.y ,2));
		
		t.per= l1+l2+l3;
		
		// formula di erone
		t.area=sqrt((t.per/2)*(t.per/2-l1)*(t.per/2-l2)*(t.per/2-l3));
		
		cout << t.per << "    " << t.area << endl;
		
		if((l1*l1+l2*l2)-l3*l3<TOLL || (l3*l3+l2*l2)-l1*l1<TOLL || (l1*l1+l3*l3)-l2*l2<TOLL)
			cout << "è rettangolo\n";
		else
			cout << "non è rettangolo\n";
			
		Triangle t2{{3,5},{3,0},{0,0}};
		
		l1=sqrt(pow(t2.v2.x - t2.v1.x ,2)+pow(t2.v2.y - t2.v1.y ,2));
		l2=sqrt(pow(t2.v3.x - t2.v2.x ,2)+pow(t2.v3.y - t2.v2.y ,2));
		l3=sqrt(pow(t2.v3.x - t2.v1.x ,2)+pow(t2.v3.y - t2.v1.y ,2));
		
		t2.per = l1+l2+l3;
		// formula di erone
		t2.area=sqrt((t2.per/2)*(t2.per/2-l1)*(t2.per/2-l2)*(t2.per/2-l3));
		
		Triangle t3{{12,5},{13,0},{0,10}};
		
		l1=sqrt(pow(t3.v2.x - t3.v1.x ,2)+pow(t3.v2.y - t3.v1.y ,2));
		l2=sqrt(pow(t3.v3.x - t3.v2.x ,2)+pow(t3.v3.y - t3.v2.y ,2));
		l3=sqrt(pow(t3.v3.x - t3.v1.x ,2)+pow(t3.v3.y - t3.v1.y ,2));
		
		t3.per = l1+l2+l3;
		
		// formula di erone
		t3.area=sqrt((t3.per/2)*(t3.per/2-l1)*(t3.per/2-l2)*(t3.per/2-l3));
		
		
		if(t3.area>t.area && t3.area>t2.area)
			cout << "Il più grande è t3"<<endl;
			
		else if(t2.area>t.area && t2.area>t3.area)
			cout << "Il più grande è t2"<<endl;
			
		else if(t.area>t2.area && t.area>t3.area)
			cout << "Il più grande è t1"<<endl;
		
		return 0;
}

