#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int total, limit, gender, grade, counter[6][2] = {{0}}, result = 0;
	
	cin >> total >> limit;
	
	for(int i=0; i<total; i++) {
		cin >> gender >> grade;
		counter[grade-1][gender] += 1;
	}
	
	for(int* v : counter) {
		result += v[0] / limit;
		result += v[1] / limit;
		if (v[0] % limit) result += 1;
		if (v[1] % limit) result += 1;
	}
	
	cout << result;
	
	return 0;
}