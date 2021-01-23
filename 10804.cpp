#include <bits/stdc++.h>
using namespace std;

void reverse(int start, int end, int arr[]) {
	for(int i=0; i<(end-start+1)/2; i++) {
		int tmp = arr[start+i];
		arr[start+i] = arr[end-i];
		arr[end-i] = tmp;
	}
}

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int start, end;
	int cards[21] = {};
	cards[0] = -1;
	for(int i=1; i<21; i++) cards[i] = i;
	
	for(int i=0; i<10; i++) {
		cin >> start >> end;
		reverse(start, end, cards);
	}
	
	for(int i=1; i<21; i++) cout << cards[i] << " ";
	
	return 0;
}