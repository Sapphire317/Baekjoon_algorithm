#include <bits/stdc++.h>

using namespace std;

int main(){

    string s1, s2;

    //1 ~ 1000
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        int s1arr[27]={};
        int s2arr[27]={};

        bool same = true;

        cin>>s1>>s2;

  
        if(s1.size() != s2.size()){
            cout<<"Impossible"<<endl; continue;
        }else{
            for(int i=0; i<s1.size(); i++){
                s1arr[(int)s1[i]-'a']++;
                s2arr[(int)s2[i]-'a']++;
            }
        }

        for(int i=0; i<26; i++){
            if(s1arr[i]!=s2arr[i]){
                same =false; break;
            }
        }

        if(same)cout<<"Possible"<<endl;
        else cout<<"Impossible"<<endl;


    }
}