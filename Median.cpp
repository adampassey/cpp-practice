#include "stdafx.h"
#include "Median.h"
#include <vector>
#include <algorithm>
#include <iostream>
#include <map>

Median::Median()
{
}

Median::~Median()
{
}

int Median::findMedian(vector<int> numbers) {
	std::sort(numbers.begin(), numbers.end());
	return numbers.at(numbers.size() / 2);
}

int Median::findMode(vector<int> numbers) {

	map<int, int> numbersAsAppeared;

	//	iterate over numbers in vector
	//	and check to see if they exist in
	//	the map- if so, increment
	for (int i : numbers) {
		
		map<int, int>::iterator iterator = numbersAsAppeared.find(i);
		if (iterator != numbersAsAppeared.end()) {
			iterator->second++;
		}
		else {
			numbersAsAppeared[i] = 1;
		}
	}

	//	iterate through the doctionary and print
	//	out the results for testing purposes
	map<int, int>::iterator iterator;
	int highestKey = 0;
	for (iterator = numbersAsAppeared.begin(); iterator != numbersAsAppeared.end(); iterator++) {
		if (iterator->second > 1) {
			if (iterator->second > numbersAsAppeared[highestKey] && highestKey == 0) {
				highestKey = iterator->first;
			}
		}
	}

	return highestKey;
}
