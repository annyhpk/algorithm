#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int alpa1[27] = {0}, alpa2[27] = {0}, result = 0;
	string a, b;
	
	cin >> a >> b;
	
	for(char c : a) alpa1[(int)c - 97] += 1;
	for(char c : b)	alpa2[(int)c - 97] += 1;
 
	
	for(int i=0; i<26; i++) {
		if (alpa1[i] != alpa2[i]) 
			result += abs(alpa1[i] - alpa2[i]);
	}
	
	cout << result;
	
	return 0;
}