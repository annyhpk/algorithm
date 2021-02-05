#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	stack<int> tower, index;
	int N;
	string result = "";
	cin >> N;
	
	for(int i=0; i<N; i++) {
		int tmp;
		cin >> tmp;
		
		while(!tower.empty()) {
			if (tmp < tower.top()) {
				result += to_string(index.top()) + ' ';
				break;
			} else {
				tower.pop();
				index.pop();
			}
		}
		
		if (tower.empty()) {
			result += "0 ";
		}
		
		tower.push(tmp);
		index.push(i+1);
	}
	
	cout << result;
	
	return 0;
}