#include <iostream>
using namespace std;


int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int line[3][4];
	int x, check = 0;
	
	for (int i=0; i<3; i++)
		for (int j=0; j<4; j++)	
			cin >> line[i][j];
	
	for(int n = 0; n < 3; n++) {
		check = 0;
		for(int i = 0; i < 4; i++) {
			check += line[n][i];
		}
		
		if(check == 4) cout << 'E' << '\n';
		else cout << char(68 - check) << '\n';
	}
	
	return 0;
}
