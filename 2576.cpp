#include <iostream>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int x, min_value = 100, min_total = 0;
	
	for (int i=0; i<7; i++) {
		cin >> x;
		if (x % 2 != 0) {
			min_total += x;
			if (x < min_value) min_value = x;	
		}
	}
	
	if (!min_total) cout << "-1";
	else cout << min_total << '\n' << min_value;
	
	return 0;
}
