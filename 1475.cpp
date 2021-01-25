#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int nums[10] = {0}, max = 0;
	string s;
	
	cin >> s;
	
	for(int i=0; i<s.size(); i++) {
		int num = (int)s[i] - 48;
		if (num == 9 || num == 6) {
			if (nums[9] > nums[6]) nums[6] += 1;
			else if (nums[9] < nums[6]) nums[9] += 1;
			else nums[num] += 1;
		} else {
			nums[num] += 1; 
		}
	}
	
	for(int v : nums) {
		if(max < v) max = v;
	}
	
	cout << max;
	
	return 0;
}