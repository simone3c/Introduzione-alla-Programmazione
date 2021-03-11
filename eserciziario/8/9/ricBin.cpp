#include <iostream>


using namespace std;

const int N=7;

int main(){

	int v[N]{1,2,3,15,30,42,60};
	int *p = v;
		
	int elem = 59;
	int last=N-1;
	int first=0;
	int mid=(first+last)/2;
	bool found=false;
	
	while(!found && first<=last){
		if(elem==*(p+mid))
			found = true;

		else if(elem<*(p+mid)){
			last=mid-1;
			mid = (last+first)/2;
		}
		else if(elem > *(p+mid)){
			first = mid+1;
			mid = (last+first)/2;
		}
	}
	

	cout << "era in " <<mid << endl;
	
}
