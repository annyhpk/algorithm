#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, nums[201] = {0}, tmp;
	
	cin >> N;
	
	for(int i=0; i<N; i++) {
		cin >> tmp;
		nums[tmp+100] += 1;
	}
	
	cin >> N;
	cout << nums[N+100];

	return 0;
}