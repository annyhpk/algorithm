#include <iostream>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int tmp, x;
	int dice_count[6] = {0, };

	for (int i=0; i < 3; i++){
		cin >> x;
		dice_count[x-1] += 1;
	}
	
	for (int i=0; i < 6; i++) {
		if(dice_count[i] == 3) {
			cout << (i+1)*1000 + 10000;
			return 0;
		} else if (dice_count[i] == 2) {
			cout << (i+1)*100 + 1000;
			return 0;
		} else if (dice_count[i] == 1) {
			tmp = i+1;
		}
	}
	
	cout << tmp*100;
	
	return 0;
}
