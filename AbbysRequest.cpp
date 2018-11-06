/*
using namespace std;
#include <string>
#include <map>
#include <math.h>
#include <iostream>

map<int, string> makemap() {
	map<int, string> newMap{
		std::make_pair(1, "I"),
		std::make_pair(4, "IV"),
		std::make_pair(5, "V"),
		std::make_pair(9, "VX"),
		std::make_pair(10, "X"),
		std::make_pair(40, "XL"),
		std::make_pair(50, "L"),
		std::make_pair(90, "XC")
	};
	return newMap;
}

string intToRomanNum(int val) {

	map<int, string> romanMap = makemap();

	int temp;
	int div = 10;
	string res;
	while (val > 0) {
		temp = floor(val / div);
		if (temp <= 3) {
			for (int i = 0; i < temp; i++)
				res += (romanMap[div]);
		}
		else if (temp == 4) {
			res += (romanMap[temp*div]);
		}
		else if (temp <= 8) {
			res += (romanMap[div * 5]);
			for (int i = 0; i < (temp - 5); i++)
				res += (romanMap[div]);
		}
		else if (temp == 9) {
			res += (romanMap[temp*div]);
		}
		val = val - (temp*div);
		div = div/10;
	}
	return res;
	cout << res << endl;
}
*/

/*int main()
{
	string val = intToRomanNum(57);
	cout << val << endl;

	/*if (paren_balanced(expr) == 1)
		cout << "Balanced" << endl;
	else
		cout << "Not Balanced" << endl;
	return 0;
}*/