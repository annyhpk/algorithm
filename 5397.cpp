#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n;
	
	cin >> n;
	string input[n];
	
	for(int i=0; i<n; i++) cin >> input[i];
	
	for(string s : input) {
		
		list<char> inputList;
		auto cur = inputList.begin();
		
		for(char command : s) {
				
			if(command == '<' && cur != inputList.begin()) {
				cur--;
			} else if(command == '>' && cur != inputList.end()) {
				cur++;
			} else if(command == '-' && cur != inputList.begin()) {
				cur--;
				cur = inputList.erase(cur);
			} else if( command != '>' && command != '<' && command != '-' ) {
				inputList.insert(cur, command);
			}	   
		}
		
		for(char c : inputList) cout << c;
		cout << '\n';
	}
	
	return 0;
}