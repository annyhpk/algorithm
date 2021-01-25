#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int n, target, count = 0;
	
	cin >> n;
	
	int nums[n+1] = {};
	
	for(int i=0; i<n; i++) cin >> nums[i];
	cin >> target;
	
	int table[target+1] = {0};
	
	for(int i=0; i<n; i++) {
		if (nums[i] < target) {
			if (table[target - nums[i]] == 1) {
				count += 1;
			} else {
				table[nums[i]] = 1;
			}
		}
	}
	
	cout << count;
	
	return 0;
}