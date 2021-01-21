#include <iostream>
#include <algorithm>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	long long start, end;
	
	cin >> start >> end;
	
	if (start > end) 
		swap(start, end);
	if (start != end) {
		cout << end - start - 1 << "\n";
		for (long long i = start + 1; i < end; i++) 
			cout << i << " ";
	} else {
		cout << 0;
	}
	
	return 0;
}
	