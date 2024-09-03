#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string S) {
	string res;
	int count = 0;
	for (char c : S) {
		if (c == '(' && count++ > 0)
			res += c;
		if (c == ')' && count-- > 1)
			res += c;
	}
	return res;
}

int main()
{
	string S = "(()())(())()";
	cout << removeOuterParentheses(S);
}

// g++ -std=c++11 parentheses.cpp -o parentheses