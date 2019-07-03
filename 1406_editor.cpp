#include <bits/stdc++.h>

using namespace std;

int main(){

    list<char> L;

    string s;
    cin>>s;

    for(auto c : s) L.push_back(c);
    auto cursor = L.end();

    int Q;
    cin>>Q;
    string tmp;
    getline(cin, tmp);

    while(Q--){
        string op;
        getline(cin, op);
        if(op[0]=='P'){
            L.insert(cursor, op[2]);
        }else if(op[0]=='L'){
            if(cursor!=L.begin()) cursor--;
        }else if(op[0]=='D'){
            if(cursor!=L.end()) cursor++;
        }else{
            if(cursor!=L.begin()){
                cursor--;
                cursor = L.erase(cursor);
            }
        }
    }

    for(auto c : L) cout<<c;


}