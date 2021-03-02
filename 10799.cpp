#include <bits/stdc++.h>
using namespace std;


int main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string in;
	stack<char> s;
	int answer = 0;
	
	getline(cin, in);
	
	for(int i=0; i<in.size(); i++) {
		if (in[i] == '(') {
			s.push(in[i]);
		} else {
			s.pop();
			
			if (in[i-1] == '(') {
				answer += s.size();
			} else {
				answer += 1;
			}
		}
	}
	
	cout << answer;
	
	return 0;
}