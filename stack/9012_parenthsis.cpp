#include <bits/stdc++.h>

using namespace std;

int main(){
    int N;

    cin>>N;

    while(N--){
        stack<char> paren;
        string s;

        cin>>s;

        for(auto c : s){
           
            if(c=='('){
                paren.push(c);
            }else if(c==')'){
                if(!paren.empty() && paren.top()=='(') paren.pop();
                else{
                    paren.push(c);
                }
            }

        }

        if(paren.empty()) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}