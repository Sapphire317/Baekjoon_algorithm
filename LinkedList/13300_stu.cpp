#include <bits/stdc++.h>

using namespace std;

int main(){

    int N, K;
    cin>>N>>K;
    int stu[6][2] = {};

    while(N--){
        int S,Y;
        cin>>S>>Y;
        stu[Y-1][S]++;
    }

    int roomcnt= 0;
    for(int i = 0; i<6; i++){
        for(int j=0; j<2; j++){
            if(stu[i][j]>=1 && stu[i][j]<=K)roomcnt++;
            else if(stu[i][j]>K){
                while(stu[i][j]>0){
                    stu[i][j]= stu[i][j]-K;
                    roomcnt++;
                }
            }
        }
    }

    cout<<roomcnt;
}