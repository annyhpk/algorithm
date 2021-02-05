#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	stack<int> seq, c;
	vector<char> result;
	int K, i=0; 
	bool flag = false;
	
	cin >> K;
	for(int i=K; 0<i; i--)
		seq.push(i); 
	
	
	for(int i=0; i<K; i++) {
		int tmp;
		cin >> tmp;
		
		while(1) {
			if (!c.empty() && c.top() == tmp) {
				result.push_back('-');	
				c.pop();
				break;
			}
			
			if (seq.empty() && c.top() != tmp) {
				flag = true;
				break; 
			} else {
				result.push_back('+');
				c.push(seq.top());
				seq.pop();
			}
		}
		
		if(flag) break;
	}
	
	if (flag) {
		cout << "NO";
	} else {
		for(char p: result)
			cout << p << '\n';
	}

	
	return 0;
}