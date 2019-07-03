#include <bits/stdc++.h>

using namespace std;

int main(){
    list<int> N;

    int n, find, cnt = 0;
    cin>>n;

    for(int i=0; i<n; i++){
        int temp;
        cin>>temp; N.push_back(temp);
    }
    cin>>find;

    for(auto num : N){
        if(num==find) cnt++;
    }

    cout<<cnt;
}