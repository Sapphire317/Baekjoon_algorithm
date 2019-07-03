#include <iostream>

using namespace std;

int main(){
    long long a, b;
    long long dif;
    cin>>a>>b;

    if(a>b){
        dif = a-b-1;
         cout<<dif<<endl;
        while(dif>0){
        cout<<b+1<<" ";
        b++;dif--;
    }
    }else if(a==b){
        dif = 0;
         cout<<dif<<endl;
        while(dif>0){
        cout<<a+1<<" ";
        a++;dif--;
    }
    }else{
        dif = b-a-1;
         cout<<dif<<endl;
        while(dif>0){
        cout<<a+1<<" ";
        a++;dif--;
    }
    }
   

    
}