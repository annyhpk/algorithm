#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, k;
	list<int> people;
	vector<int> result;
	
	cin >> n >> k;
	
	for(int i=1; i<=n; i++) people.push_back(i);

	auto cur = people.begin();
	list<int>::iterator iter;
	
	cout << '<';
	for(int i=0; i<n-1; i++) {
		for(int j=0; j<k; j++) {
			if(cur == people.end()) {
				cur = people.begin();
			}
			cur++;
		}
		cur--;
		iter = cur;
		cout << *iter << ", ";
		cur = people.erase(cur);
	}
	
	for(int i : people) cout << i << '>';
	
	return 0;
}