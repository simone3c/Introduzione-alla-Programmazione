/*
	realiazzare un prog che verifica se 3 punti sono disposti in ordine crescente
	(se le x e y sono crescenti)

*/
#include <iostream>
#include <cmath>

using namespace std;

struct Point{
	float x;
	float y;
};

//PROTOTIPI
Point ReadPoint();
void PrintPoint(Point);
void OrderByX(Point&, Point&, Point&);
bool IsAscending(Point, Point, Point);

int main(){

	Point p1, p2, p3;

	//Input
	p1 = ReadPoint();
	p2 = ReadPoint();
	p3 = ReadPoint();
	
	//ordino le ascisse
	OrderByX(p1, p2, p3);
	
	//output
	PrintPoint(p1);
	PrintPoint(p2);
	PrintPoint(p3);
	
	cout << boolalpha << "Sono in ordine crescente?" << IsAscending(p1, p2, p3) << endl;
}

Point ReadPoint(){
	Point P;
	cout << "Inserisci la x e la y: ";
	cin >> P.x >> P.y;
	return P;
}

void PrintPoint(Point P){
	cout << "( " << P.x << " , " << P.y << " )" << endl;
}

void OrderByX(Point &p1, Point &p2, Point &p3){

	if(p2.x < p1.x && p2.x < p3.x)
		swap(p1, p2);
		
	if(p3.x < p1.x && p3.x < p2.x)
		swap(p1, p3);
	
	if(p3.x < p2.x)
		swap(p2, p3);
}

void swapPoint(Point &p1, Point &p2){
	Point temp = p1;
	p1=p2;
	p2=temp;
}

bool IsAscending(Point p1, Point p2, Point p3){
	return (p1.y<p2.y && p2.y<p3.y);
}







