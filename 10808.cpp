#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int alphabets[26] = {0};
	string s;
	
	cin >> s;
	
	for(int i=0; i<s.size(); i++) {
		alphabets[(int)s[i]-97] += 1;
	}
	
	for(int v : alphabets) cout << v << ' ';
	
	
	return 0;
}
	