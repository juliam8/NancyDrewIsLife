#include <string>
using namespace std;
#include <iostream>

bool backspaceCompare(string S, string T) {
	int Slen = S.length();
	int Tlen = T.length();
	for (int i = 0, j = 0; i < Slen, j < Tlen;) {
		if (i < Slen) {
			if (S[i] == '#') {
				if (i == 0) {
					S.erase(i, 1);
					Slen--;
				}
				else {
					S.erase(i - 1, 2);
					Slen -= 2; i--;
				}
			}
			else
				i++;
		}
		if (j < Tlen) {
			if (T[j] == '#') {
				if (j == 0) {
					T.erase(j, 1);
					Tlen--;
				}
				else {
					T.erase(j - 1, 2);
					Tlen -= 2; j--;
				}
			}
			else
				j++;
		}
	}
	return (S == T);

}



/*"ab#c"
"ad#c"*/

/*"gtc#uz#"
"gtcm##uz#"*/