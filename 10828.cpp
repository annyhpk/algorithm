#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	stack<int> numStack;
	int n;
	
	cin >> n;
	
	while(n--) {
		string c;
		cin >> c;
		if (c == "push") {
			int tmp;
			cin >> tmp;
			numStack.push(tmp);
		} else if (c == "top") {
			if (numStack.empty())
				cout << -1 << '\n';
			else {
				cout << numStack.top() << '\n';
			}
		} else if (c == "size") {
			cout << numStack.size() << '\n';	
		} else if (c == "pop") {
			if (numStack.empty())
				cout << -1 << '\n';
			else {
				cout << numStack.top() << '\n';
				numStack.pop();	
			}
		} else if (c == "empty") {
			cout << (int)numStack.empty() << '\n';	
		}		
		
	}
	
	
	return 0;
}