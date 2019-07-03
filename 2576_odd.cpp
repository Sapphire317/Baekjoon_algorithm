#include <iostream>

using namespace std;

int main(){
    int num = 7;

    int temp;
    int sum =0, min = 100, oddCt = 0;

    for(int i=0; i<num; i++){
        cin>>temp;
        if(temp%2==1){
            sum+=temp;
            if(temp < min) {
            min= temp;
            }
            oddCt++;   
        }
    }

    if(oddCt==0){
        cout<<-1<<endl;
    }else{
        cout<<sum<<endl;
        cout<<min<<endl;
    }
}