
#include <string>
#include <vector>
#include <iostream>
using namespace std;

bool isStringPalindrome(string val) {

	int end = val.length() - 1;
	for (size_t i = 0; i < end; i++, end--) {
		if (val[i] == ' ' || val[end] == ' ')
			continue;
		if (val[i] != val[end])
			return false;
	}
	return true;
}

bool isNumPalindrome(int val) {

	vector<int> numArray;
	while (val >= 1) {
		numArray.insert(numArray.begin(), val % 10); //position specified as beginning of array. Iterator is member type
		val /= 10;
	}
	int end = numArray.size() - 1;
	for (size_t i = 0; i < end; i++, end--) {
		if (numArray[i] != numArray[end])
			return false;
	}
	return true;
}


/*void main() {

	string str = "hello";
	string str2 = "taco cat";

	int num1 = 12321;

	if (isStringPalindrome(str2))
	//if (isNumPalindrome(num1))
		cout << str2 << " is a palindrome." << endl;
	else
		cout << str2 << " is not a palindrome." << endl;
}*/