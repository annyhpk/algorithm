#include <bits/stdc++.h>
using namespace std;


const int MX = 1000005;
int pre[MX], nxt[MX];
int unused = 1;
char dat[MX];

void insert(int addr, char c){
    dat[unused] = c;
    nxt[unused] = nxt[addr];
    pre[unused] = addr;
    if (nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr){
    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

void traverse(){
    int cur = nxt[0];
    while(cur != -1){
        cout << dat[cur];
        cur = nxt[cur];
    }
}


int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cur = 0, command;
    string s;

    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);

    cin >> s;

    for(char c : s) {
        insert(cur++, c);
    }

    int N;
    cin >> N;

    for(int i=0; i<N; i++) {
        char c, opt;
        cin >> c;
        if (c == 'P') cin >> opt;
        if(c == 'L') {
            if(cur - 1 > -1) cur--;
        } else if(c == 'D') {
            cur++;
        } else if(c == 'B') {
            erase(cur);
            if(cur - 1 > -1) cur--;
        } else {
            insert(cur++, opt);
        }
    }

    traverse();

    return 0;
}