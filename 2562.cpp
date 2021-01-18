#include <iostream>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int x, max_value = 0, max_value_loc = 0;
	
	for (int i=0; i<9; i++) {
		cin >> x;
		if (x > max_value) {
			max_value = x;
			max_value_loc = i+1;	
		}
	}
	
	cout << max_value << '\n' << max_value_loc;
	
	return 0;
}
