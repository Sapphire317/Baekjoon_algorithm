#include <bits/stdc++.h>

using namespace std;

    const int MX = 10000005;

    int dat[MX];
    int pre[MX];
    int nxt[MX];
    int unused = 1; 

int main(){
    fill(pre, pre+MX, -1);
    fill(nxt, nxt+MX, -1);
}

int insert(int idx, char val){
    dat[unused]= val;
    pre[unused] = idx;
}