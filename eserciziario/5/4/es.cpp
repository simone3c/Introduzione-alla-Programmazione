/*
	
	modello di punto su piano
	cartesiano
	
	modello di rettangolo su piano
	cartesiano
	
	guardo se ret2 è contenuto nell atLro

*/

#include <iostream>
#include <cmath>
using namespace std;

const double TOLL = 0.001;

struct Point{
	double x;
	double y;
};

struct Rect{
	Point tL;
	Point bR; 
};

int main(){
	
	Rect ret1{{-1,2},{2,-3}};
	Rect ret2{{0,1},{1,0}};
	
	/*
	if(ret2.tL.x>ret1.tL.x && ret2.tL.y<ret1.tL.y && ret2.bR.x<ret1.bR.x && ret2.bR.y>ret1.bR.y)
		 cout << "R2 è contenuto in R1!!"<<endl;
	*/
	
	Point ret1vert[4]{{ret1.tL},
										{ret1.tL.x, ret1.bR.y}, 
										{ret1.bR}, 
										{ret1.bR.x, ret1.tL.y}
									 };
									 
	Point ret2vert[4]{{ret2.tL},
										{ret2.tL.x, ret2.bR.y}, 
										{ret2.bR}, 
										{ret2.bR.x, ret2.tL.y}
									 };
	
	bool expr0=(ret2vert[0].x > ret1vert[0].x && ret2vert[0].y < ret1vert[0].y);
	bool expr1=(ret2vert[1].x > ret1vert[1].x && ret2vert[1].y > ret1vert[1].y);
	bool expr2=(ret2vert[2].x < ret1vert[2].x && ret2vert[2].y > ret1vert[2].y);
	bool expr3=(ret2vert[3].x < ret1vert[3].x && ret2vert[3].y < ret1vert[3].y);
	
	if(expr0 && expr1 && expr2 && expr3)
		cout << "R2 contenuto in R1!!" << endl;
	else
		cout << "R2 NON contenuto in R1!!" << endl;
		

	return 0;
}

