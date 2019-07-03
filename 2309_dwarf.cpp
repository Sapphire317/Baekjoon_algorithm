#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int num = 9;

  
    int arr[9];
    int answer[7];

    int idx = 0;
    int sum=0;

    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    sort(arr, arr+9);

    for(int i=0; i<num; i++){
        for(int j=i+1; j<num; j++){
            for(int k=0; k<num; k++){
                if(k!=i && k!=j){
                    sum+=arr[k];
                    answer[idx++]=arr[k];
                    
                }
            }

            if(sum==100){
                for(int i=0; i<7; i++) cout<<answer[i]<<endl;
                return 0;
            }else{
                sum = 0;
                idx = 0;
            }
            
        }
    }


    
}