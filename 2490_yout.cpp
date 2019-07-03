#include <iostream>

using namespace std;

int main(){
    
    int yout[4];
    for(int a = 0; a<3; a++){
        int count=0;
        for(int i=0; i<4; i++){
        cin>>yout[i];
        if(yout[i]==1)count++;
    }

    switch(count){
        case 0: cout<<'D'<<endl; break;
        case 1: cout<<'C'; break;
        case 2: cout<<'B'; break;
        case 3: cout<<'A'; break;
        case 4: cout<<'E'; break;
    }

    }
    

}