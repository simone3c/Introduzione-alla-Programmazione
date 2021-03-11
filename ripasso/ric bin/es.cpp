#include <vector>
#include <iostream>

using namespace std;


int ric(vector<int> v, int x, int first, int last){
	if(first>last) return -1;
	
	int mid = (last+first)/2;
	if(v[mid] == x) return mid;
	
	if(x<v[mid]) return ric(v, x, first, mid-1);
	else return ric(v, x, mid+1, last);
	

}

void binary(vector<int> v, int x){

	cout << ric(v, x, 0, v.size()-1)<<endl;
}

int main(){

	vector<int> v;
	for(int i=0; i<10;++i)
		v.push_back(i);
		
	binary(v, 9);


}
