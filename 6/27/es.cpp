#include <iostream>

using namespace std;
int sum(int&,int&,int&);
int main(){

	int a=10, b=3, max=10;
	
	cout << sum(a, b, max) << endl;

}

int sum(int &a, int &b, int &max){
	int sum=0;
	for(int i=1; i<=max; ++i)
		if(i%a==0 || i%b==0)
			sum +=i;
	return sum;
}
