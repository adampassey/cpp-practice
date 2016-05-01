#pragma once
#include <vector>

using namespace std;

class Median
{
public:
	Median();
	~Median();

	/*
		Find the median (middle element) of the
		passed vector. Expects an even number of
		elements.
	*/
	static int findMedian(vector<int> numbers);

	/*
		Find the mode (number that occurs most often)
		in the passed vector. If no number appears more
		than once, there is no mode.
	*/
	static int findMode(vector<int> numbers);
};

