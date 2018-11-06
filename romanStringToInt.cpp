#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
	int romanToInt(string s) {

		std::unordered_map<string, int> romanMap = {
			std::make_pair("I", 1),
			std::make_pair("IV", 4),
			std::make_pair("V", 5),
			std::make_pair("IX", 9),
			std::make_pair("X", 10),
			std::make_pair("XL", 40),
			std::make_pair("L", 50),
			std::make_pair("XC", 90),
			std::make_pair("C", 100),
			std::make_pair("CD", 400),
			std::make_pair("D", 500),
			std::make_pair("CM", 900),
			std::make_pair("M", 1000)
		};
		size_t loc = 0;
		int res = 0;
		while (loc <= s.length()) {
			if (romanMap.find(s.substr(loc, loc + 1)) != romanMap.end()) {
				res += romanMap.at(s.substr(loc, loc + 1));
				loc += 2;
			}
			else {
				res += romanMap.at(s.substr(loc, 0));
				loc += 1;
			}

		}
		return res;
	}
};