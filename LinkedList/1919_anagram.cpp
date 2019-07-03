#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1;
    string s2;
    int cnt;
    int arr1[26]={};
    int arr2[26]={};

    cin>>s1>>s2;

    for(auto s: s1){
        arr1[s-'a']++;
    }

    for(auto s: s2){
        arr2[s-'a']++;
    }

    for(int i=0; i<26; i++){
        cnt+=(abs(arr1[i]-arr2[i]));
    }

    cout<<cnt;
}