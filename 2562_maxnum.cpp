#include <iostream>

using namespace std;

int main(){
    int num = 9;

    int temp;
    int maxNum = 0, idx;

    for(int i=0; i<num; i++){
        cin>>temp;
        if(temp > maxNum) {
            maxNum = temp;
            idx = i+1;
        }
    }

    cout<<maxNum<<endl;
    cout<<idx<<endl;
}