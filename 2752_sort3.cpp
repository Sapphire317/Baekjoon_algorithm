#include <iostream>

using namespace std;

int main(){
    int n1, n2, n3;
    cin>>n1>>n2>>n3;

   if(n1 >= n2){
       if(n1 >= n3){
        if(n2 >= n3){
            cout<<n3<<" "<<n2<<" "<<n1;
        }else{
            cout<<n2<<" "<<n3<<" "<<n1;
        }
       }else{
           cout<<n2<<" "<<n1<<" "<<n3;
       }
   }else{
       if(n2 >= n3){
        if(n1 >= n3){
            cout<<n3<<" "<<n1<<" "<<n2;
        }else{
            cout<<n1<<" "<<n3<<" "<<n2;
        }
       }else{
           cout<<n1<<" "<<n2<<" "<<n3;
       }
   }
}