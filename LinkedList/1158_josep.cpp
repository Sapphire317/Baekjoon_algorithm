#include <bits/stdc++.h>

using namespace std;


void josephus (int n, int k){

    list<int> survivors;

    for(int i=1; i<=n; i++){
        survivors.push_back(i);
    }

    auto dead = survivors.begin();

    //go ahead right before the node to delete.
    for(int i=0; i<k-1; i++){
        dead++;
    }

    cout<<"<";

    while(true){
        cout<<*dead;
        dead = survivors.erase(dead);

        if(dead==survivors.end()){
            dead = survivors.begin();
        }

        n--;
        if(n==0) break;

        cout<<", ";

        for(int i=0; i< (k-1) % n; i++){
            dead++;
            if(dead==survivors.end()){
                dead = survivors.begin();
            }
        }
    }
    printf(">");
}

int main(){

    
    int N, K;
    cin>>N>>K;
    
    josephus(N, K);

}
