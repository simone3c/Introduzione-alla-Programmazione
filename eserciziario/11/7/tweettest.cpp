#include "tweet.h"
#include <iostream>

const int n = 3;

int main(){

	std::vector<Tweet> l;
	std::cout << "inserisci 3 tweet e relativi hashtag\n";
	
	for(int i=0; i<n; ++i)
		l.push_back(tweetread());

	print_list(l, n);
}
