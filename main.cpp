// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

#include "Median.h"

using namespace std;

int main()
{
	cout << "C++ practice" << endl;

	//	Median
	vector<int> numbers = { 4, 7, 9, 12, 78, 90, 32, 15, 6, 45 };
	cout << "Median is: " << Median::findMedian(numbers) << endl;

	//	Mode
	vector<int> modeNumbers = { 1, 1, 8, 9, 4, 56, 99, 87, 13, 24 };
	cout << "Mode is: " << Median::findMode(modeNumbers) << endl;

	int endProgramKey = 0;
	cout << "Press any key (and ENTER!) to terminate program" << endl;
	cin >> endProgramKey;

    return 0;
}

