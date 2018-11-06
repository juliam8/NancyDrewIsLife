#include <string>
#include <unordered_map>
using namespace std;
#include <iostream>

int firstUniqChar(string s) {

	unordered_map<char, int> mymap;

	for (int i = 0; i < s.length() - 1; i++) {
		mymap[s[i]]++;
	}

	for (int i = 0; i < s.length() - 1; i++) {
		if (mymap[s[i]] == 1) return i;
	}
	return -1;

}

