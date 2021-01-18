#include <iostream>
#include <algorithm>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int nums[5], avg = 0;
	
	for (int i=0; i<5; i++) {
		cin >> nums[i];
		avg += nums[i];
	}
	sort(nums, nums+5);
	
	avg /= 5;
	
	cout << avg << '\n' << nums[2];
	
	return 0;
}