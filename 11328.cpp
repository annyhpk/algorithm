#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N;
	string a, b;
	vector<char> A, B;
	
	cin >> N;
	
	for(int i=0; i<N; i++) {
		cin >> a >> b;
		A.insert(A.begin() ,a.begin(), a.end());
		B.insert(B.begin(), b.begin(), b.end());
		A.push_back('\0');
		B.push_back('\0');
		
		sort(A.begin(), A.end());
		sort(B.begin(), B.end());
		
		if(A == B) cout << "Possible" << '\n';
		else cout << "Impossible" << '\n';
		
		A.erase(A.begin(), A.end());
		B.erase(B.begin(), B.end());
	}

	return 0;
}