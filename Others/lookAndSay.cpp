// C++ code to implement the above approach
#include <bits/stdc++.h>

using namespace std;

// Function to generate the nth row of the look-and-say
// pattern

string countAndSay(int n)
{
	if (n == 1)
		return "1";

	std::string ret{ "" };
	std::string strToCount{ countAndSay(
		n - 1) }; // we need to count and say the n-1th term
	std::stack<char> stack;

	for (int i{ 0 }; i <= strToCount.length(); ++i) {
		// if we're at the end OR we find a num that's
		// different... we add the length of the stack to ret
		// and also the num we've been counting then, we
		// empty the stack to count the next number
		if (i == strToCount.length()
			|| !stack.empty()
				&& stack.top() != strToCount[i]) {
			std::stringstream ss;
			std::string toAdd{ "" };
			ss << stack.size();
			ss >> toAdd;
			ret += toAdd;
			ret += stack.top();
			while (!stack.empty())
				stack.pop();
		}
		if (i != strToCount.length())
			stack.push(strToCount[i]);
	}
	return ret;
}

int main()
{
	int n = 5;
	cout << countAndSay(n) << endl;
	return 0;
}
