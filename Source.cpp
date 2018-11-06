/*#include <string>
#include <iostream>
#include <stack>
using namespace std;

int paren_balanced(string str) {
	stack<char> p_stack;
	char check;
	for (int i = 0; i < str.length(); i++) {
		if ((str[i] == '{') || (str[i] == '[') || (str[i] == '(')) {
			p_stack.push(str[i]);
		}
		else if ((str[i] == '}') || (str[i] == ']') || (str[i] == ')')) {
			check = p_stack.top();
			switch (str[i]) {
			case '}':
				if (check != '{') return 0;
				break;
			case ']':
				if (check != '[') return 0;
				break;
			case ')':
				if (check != '(') return 0;
				break;
			}
			p_stack.pop();
		}
	}
	if (!p_stack.empty())
		return 0;
	else
		return 1;
}*/
// Driver program to test above function