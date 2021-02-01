#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	stack<int> S;
	int K, result = 0;
	
	cin >> K;
	
	while(K--) {
		int i;
		cin >> i;
		if(i == 0 && !S.empty()) 
			S.pop();
		else
			S.push(i);
	}
	
	if(S.empty()) {
		cout << 0;
		return 0;
	}
	
		
	while(!S.empty()) {
		result += S.top();
		S.pop();
	}
		
	cout << result;
	
	return 0;
}