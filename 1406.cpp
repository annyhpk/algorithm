#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	list<char> inputList;
	
	int n;
	string s;
	
	cin >> s >> n;
	
	for(char c : s) {
		inputList.push_back(c);
	}
	
	auto cur = inputList.end();
	
	for(int i=0; i<n; i++) {
		char command, opt;
		cin >> command;
		
		if(command == 'L' && cur != inputList.begin()) {
			cur--;
		} else if(command == 'D' && cur != inputList.end()) {
			cur++;
		} else if(command == 'B' && cur != inputList.begin()) {
			cur--;
			cur = inputList.erase(cur);
		} else if(command == 'P'){
			cin >> opt;
			inputList.insert(cur, opt);
		}
	}
	
	for(char c : inputList) cout << c;
	
	return 0;
}