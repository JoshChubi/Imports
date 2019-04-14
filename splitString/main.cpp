#include <iostream>
#include "splitString.h"

using namespace std;

void testSplitString(splitString & split, const string & toBeSplit, const int & testIndex);

int main()
{
	string toBeSplit = "Josh Brad Ortiz";
	splitString split(toBeSplit, ' ');
	testSplitString(split,toBeSplit,100);

	toBeSplit = "1,2,4,6,8,10";
	split = splitString(',',toBeSplit);
	testSplitString(split,toBeSplit, 2);

	system("pause");
	return 0;
}

void testSplitString(splitString & split, const string & toBeSplit, const int & testIndex)
{
	cout << toBeSplit + ":\n";

	for (unsigned index = 0; index < split.getNumOfTokens(); index++)
		cout << split.getTokenAt(index) << endl;

	cout << "Index " + to_string(testIndex) + ": " + split.getTokenAt(testIndex) << endl << endl;
}