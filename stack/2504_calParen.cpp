#include <bits/stdc++.h>

using namespace std;

int main(){
    string S;
    cin>>S;

    stack<char> paren;
    stack<int> num;

    for(auto c : S){
           
            if(c=='(' || c=='['){
                paren.push(c);
            }else if(c==')'){
                if(!paren.empty() && paren.top()=='(') paren.pop();
                else{
                    paren.push(c);
                }
            }else if(c==']'){
                if(!paren.empty() && paren.top()=='[') paren.pop();
                else{
                    paren.push(c);
                }
            }

        }

        if(!paren.empty()){
            cout<<"0"<<endl;
            return 0;
        }
        
    for(auto c : S){

       if(c=='('){ 
           num.push(0);
       }else if(c=='['){
           num.push(1);
       }else if(c==')'){
           int result = 0;
           if(num.top()==0){
               result+=2;
               num.pop();
               num.push(2);

           }else{
               while(num.top()!=0){
                result+=num.top();
                num.pop();   
            }
                result*=2; num.pop();
                num.push(result);
           }
            
       }else if(c==']'){
           int result = 0;
           if(num.top()==1){
               result+=3;
               num.pop();
               num.push(3);

           }else{
               while(num.top()!=1){
              result+=num.top();
              num.pop();   
                }
                result*=3; num.pop();
                num.push(result);
           }
       }
    }

    int answer =0;
    while(!num.empty()){
        answer+=num.top();
        num.pop();
    }

    cout<<answer;
  
}