#include <bits/stdc++.h>
using namespace std;


int main(void){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	deque<int> D;
	int n, m, count = 0;
	cin >> n >> m;
	
	for(int i=1; i<=n; i++) {
		D.push_back(i);
	}
	
	for(int i=0; i<m; i++) {
		int num, index;
		cin >> num;
		
		for (int j = 0; j < D.size(); j++) {
            if (D[j] == num) {
                index = j;
                break;
            }
        }
		
		if (index < D.size() - index) {
			while(num != D.front()) {
				D.push_back(D.front());
				D.pop_front();
				count++;
			}
		} else {
			while(num != D.front()) {
				D.push_front(D.back());
				D.pop_back();
				count++;
			}
		}
		if (num == D.front()) D.pop_front();
	}
	
	cout << count;	

	return 0;
}