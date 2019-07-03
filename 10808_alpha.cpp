#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[27]={};

    string s;
    cin>>s;

    for(auto i : s){
        a[i-'a']++;
    }
    

    for(int i=0; i<26; i++){
        cout<<a[i]<<" ";
    }

}