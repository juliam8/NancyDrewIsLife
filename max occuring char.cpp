
// C++ program to output the maximum occurring character 
// in a string 
#define ASCII_SIZE 256
#include <string>
#include <iostream>
using namespace std;

char getMaxOccuringChar(std::string str)
{
	// Create array to keep the count of individual 
	// characters and initialize the array as 0 
	int count[ASCII_SIZE] = { 0 };

	// Construct character count array from the input 
	// string. 
	int len = str.length();
	for (int i = 0; i<len; i++)
		count[str[i]]++;	//gets put into count, which is an integer array, as ASCII value

	int max = -1;  // Initialize max count 
	char result;   // Initialize result 

	 // Traversing through the string and maintaining 
	  // the count of each character 
	for (int i = 0; i < len; i++) {
		if (max < count[str[i]]) {
			max = count[str[i]];
			result = str[i];
		}
	}

	return result;
}

// Driver program to test the above function 
