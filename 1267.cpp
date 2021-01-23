#include <bits/stdc++.h>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, n, total_call = 0, Y = 0, M = 0;
	
	cin >> N;
	
	for(int i=0; i<N; i++){
		cin >> n;
		Y += (n / 30)*10;
		M += (n / 60)*15;
		if(n % 29) Y += 10;
		if(n % 59) M += 15;
	}
	
	if(Y == M) cout << "Y M " << Y;
	else if(Y < M) cout << "Y " << Y;
	else cout << "M " << M;
	
	return 0;
}