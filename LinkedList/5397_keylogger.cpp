#include <bits/stdc++.h>

using namespace std;


int main(){

    

    int N;
    
    cin>>N;
    
    // < : 왼쪽이동
    // > : 오른쪽이동
    // - 삭제
    // 나머지는 입력
    while(N--){
        string S;
        list<char> cmd;
        cin>>S;

        auto cursor = cmd.begin();
        for(auto s: S){
           if(s=='<'){
               if(cursor !=cmd.begin()) cursor--;
           }else if(s=='>'){
               if(cursor !=cmd.end()) cursor++;
           }else if(s=='-'){
               //erase 함수의 return 값은 바로 다음 iterator
               if(cursor!=cmd.begin()){
                   cursor--;
                   cursor = cmd.erase(cursor);
               }
           }else{
               cmd.insert(cursor, s);
           }     
        }

        for(auto s: cmd){
            cout<<s;
        }
        cout<<endl;


    }

}
