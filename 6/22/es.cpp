#include <iostream>
#include <cmath>
using namespace std;

int fun(int, int);

int main(){

	try{
		int n, d;
		cout << "Inserisci un numero tra 0 e 9: ";
		cin >> n;
		
		cout << "Inserisci un numero >10: ";
		cin >> d;

		cout << "il massimo è: " << fun(n,d)<<endl;
	}
	catch(string &e){
		cerr << e;
	}
}

int fun(int n, int d){
	if(n<0 || n>9 || d<10){
		string err= "errore";
		throw err;
	} 

    
    
    for(int i=d; i>=10; --i){
        
        int cifre=0;
        int aux = i;

        while(aux!=0){
            cifre++;
            aux/=10;
        }
        aux = i;

        for(int k=0; k<cifre; ++k)
            if((aux/(int)(pow(10, k))%10)==n)
            return i;



    }

    return -42;
	
}
