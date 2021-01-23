#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int squared = 1, n, result[11] = {};
	string s;
	
	for(int i=0; i<3; i++) {
		cin >> n;
		squared *= n;	
	}
	
	s = to_string(squared);
		
	for(int i=0; i<s.size(); i++) {
		result[(int)s[i]-48] += 1;
	}
	
	for(int i=0; i<10; i++) cout << result[i] << '\n';
	
	return 0;
}