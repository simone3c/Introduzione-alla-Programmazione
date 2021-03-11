#ifndef TWEET_H
#define TWEET_H

#include <vector>
#include <string>

struct Tweet{
	std::string text;
	std::vector<std::string> hashtag;

};

void tweetwrite(Tweet);

Tweet tweetread();

void print_list(std::vector<Tweet>, int);

#endif
