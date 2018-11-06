#include <string>
using namespace std;

#include <iostream>

	string licenseKeyFormatting(string S, int K) {
		string formatted = "";
		string result = "";

		for (int i = S.length() - 1; i >-1; i--) {
			if (S[i] != '-') {
				formatted += (toupper(S[i]));
			}
			if (formatted != "") {
				if ((formatted.length() == K) || (i == 0)) {
					if (result == "")
						result += formatted;
					else
						result += "-" + formatted;
					formatted = "";
				}
			}
		}
		reverse(result.begin(), result.end());
		return result;
	}


// Driver program to test above function 
/*int main()
{
	//string str = "2-5g-3-J";
	//string str = "5F3Z-2e-9-w";
	string str = "--a-a-a-a--";
	int K = 2;
	//int K = 4;
	
	cout << licenseKeyFormatting(str, K) << endl;
	//Solution mysolution;
	//cout << mysolution.romanToInt(str);

	return 0;
}
*/