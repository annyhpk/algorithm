#include <iostream>
#include <algorithm>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int nums[9];
	int sum = 0, i = 0;
	bool flag = false;
	
	for (int i=0; i<9; i++) {
		cin >> nums[i];
		sum += nums[i];
	}
	
	for (int i=0; i<8; i++) {
		for (int j=i+1; j<9; j++) {
			if (sum - nums[i] - nums[j] == 100) {
				nums[i] = 1000;
				nums[j] = 1000;
				flag = true;
				break;
			}
		}
		if(flag) break;
	}
	
	sort(nums, nums+9);
	
	for (int i=0; i<7; i++) cout << nums[i] << '\n';
	 
	return 0;
}
	