#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}

void infixToPostfix(string s)
{
	stack <char> st; 
	string result;
	for (int i = 0; i < s.length(); i++) {
		char c = s[i];
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
			result += c;
		else if (c == '(')
			st.push('(');
		else if (c == ')') {
			while (st.top() != '(') {
				result += st.top();
				st.pop();
			}
			st.pop();
		}
		else {
			while (!st.empty() && prec(s[i]) <= prec(st.top())) {
				result += st.top();
				st.pop();
			}
			st.push(c);
		}
	}
	while (!st.empty()) {
		result += st.top();
		st.pop();
	}
    cout<<endl<<"Given expression is: "<<s<<endl;
	cout<<"Postfix Expression is: " << result << endl;
}

int main()
{
	string exp = "a+b*(c^d-e)$(f+g*h)-i";
	// Function call
	infixToPostfix(exp);
	return 0;
}

//output
// Given expression is: a+b*(c^d-e)$(f+g*h)-i
// Postfix Expression is: abcd^e-fgh*+^*+i-

//output
// Given expression is: a+b/(c^e)*(f+g*h)*i
// Postfix Expression is: abce^/fgh*+*i*

//output
// Given expression is: c*d-(c/d*e)/(f-g-h)
// Postfix Expression is: cd*cd/e*fgh-/-