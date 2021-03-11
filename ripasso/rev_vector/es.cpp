#include <iostream>
#include <vector>

using namespace std;

void rev_place_aux(vector<int>& v, int first, int size){
	
	if(size<=v.size()/2)return;
	
	int t=v[size-1];
	v[size-1] = v[first];
	v[first] = t;
	
	rev_place_aux(v,first+1, size-1);
}

void rev_place(vector<int>& v){

	rev_place_aux(v,0, v.size());

}

void rev_not_place_aux(vector<int> v, vector<int>& z, int size){

	if(size==0) return;
	z.push_back(v[size-1]);
	
	rev_not_place_aux(v, z, size-1);

}

vector<int> rev_not_place(vector<int> v){
	if(v.size()==0) throw "error";
	vector<int> z;
	rev_not_place_aux(v, z, v.size());
	return z;

}


bool pal_aux(vector<int> v, int pos){
	if(v.size()==0) return true;
	if(pos==v.size()/2) return v[pos] == v[v.size()-pos-1];
	
	return v[pos] == v[v.size()-pos-1] && pal_aux(v, pos+1);

}



bool pal(vector<int> v){
	
	return pal_aux(v, 0);
	

}

int main(){


	vector<int> v;
	try{
		vector<int> z = rev_not_place(v);
			for(int i=0; i<v.size(); ++i)
		cout << z[i] << " ";
	}
	catch(...){};
	

	cout << boolalpha << pal(v)<<endl;





}
