#include <iostream>
#include <cmath>


using namespace std;

const int D = 5;

void print_seq(int [], int);
int prod(int [], int);
int minimo(int [], int);
bool pal(int [], int, int);
int max(int [], int);

int main(){

	int v[D]{1,33,4,-5,6};
	int v2[D]{0,0,10,0,0};
	
	print_seq(v, D);
	cout << endl;
	
	cout << prod(v, D) << endl;
	
	cout << minimo(v, D)<<endl;
	cout << max(v, D)<<endl;
	
	cout << boolalpha << pal(v, 0, D)<<endl;
	
}


int prod(int v[], int size){
	if(size<=0) 
		throw "Errore";
	if(size==1) 
		return v[size-1];
	return v[size-1]*prod(v, size-1);

}

void print_seq(int v[], int size){
	if(size==0) 
		return;
	cout << v[size-1] << " ";
	print_seq(v, size-1);

}

int minimo(int v[], int size){

	if(size == 1)
		return v[size-1];
		
	return (v[size-1]<minimo(v, size-1))? v[size-1] : minimo(v, size-1);

}

bool pal(int v[], int first, int last){
	
	if(abs(first - last)<=1) 
		return (v[first] == v[last-1]);
	
	return (v[first] == v[last-1] && pal(v, first+1, last-1));


}

int max(int v[], int size){
	if(size==1) return v[size-1];
	return (v[size-1]>max(v, size-1)?v[size-1]:max(v, size-1));


}






























