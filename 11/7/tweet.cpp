#include "tweet.h"
#include <iostream>


void tweetwrite(Tweet t){

	std::cout << "testo: " << t.text << std::endl;
	for(int i=0; i<t.hashtag.size(); ++i)
		std::cout << t.hashtag[i] << "\n";
	std::cout << "-----------\n\n";
}

Tweet tweetread(){
	Tweet z;
	std::cout << "inserisci il testo del tweet(parola): ";
	std::cin >> z.text;
	
	std::string ans;
	std::cout << "inserisci hashtag separati da spazio, un'altra cosa per smettere:\n";
	std::cin >> ans;
	while(ans[0] == '#'){
		z.hashtag.push_back(ans);
		std::cin >> ans;
	}
	return z;
}

void print_list(std::vector<Tweet> l, int size){
	if(size>0){
		print_list(l, size-1);
		tweetwrite(l[size-1]);
	}
}
