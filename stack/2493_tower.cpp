#include <bits/stdc++.h>

using namespace std;

int main(){
   
  int N;
  cin>>N;

  stack<int> tower;
  int answer[500000] ={};
  
    
  for(int i=0; i<N; i++){
    int num;
    cin>>num;
    
    if(tower.empty()){
      tower.push(num);
    }else if(num > tower.top()){
      while(num>tower.top()){
        tower.pop();
      }
      tower.push(num);
    }else if(num<tower.top()){
      
    }
  }

  int idx = N-1;
  while(!tower.empty()){
    if(top)
  }


  for(int i=0; i<N; i++){
      printf("%d ", answer[i]);
  }
}