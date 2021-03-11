#include <iostream> 

using namespace std;

int f(int x){
	if(x<0) throw "error";
	if(x==0 || x==1) return 1;
	return x*f(x-1);

}

int f2(int x){
	if(x<0) throw "error";
	if(x==0 || x==1) return 1;
	int prod = 1;
	for(int i=x; i>1; --i)
		prod*=i;
		
	return prod;


}

int main(){

	cout << f(5) << endl;
	
	cout << f2(10)<<endl;
}
