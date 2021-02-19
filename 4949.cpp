#include <bits/stdc++.h>
using namespace std;


int main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while(1) {
		string s; 
		getline(cin, s);
		if(s == ".") break;
		stack<char> check;
		bool flag = true;
		for(auto c: s) {
			if (c == '(' || c == '[') {
				check.push(c);
			} else if (c == ')') {
				if (check.empty() || check.top() != '(') {
					flag = false;
					break;
				}
				check.pop();
			} else if (c == ']') {
				if (check.empty() || check.top() != '[') {
					flag = false;
					break;
				}
				check.pop();
			}
		}
		if (!check.empty()) flag = false;
		if (flag) {
			cout << "yes" << '\n';
		} else {
			cout << "no" << '\n';
		}
	}
	
	return 0;
}