#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int num = 5;

    int temp;
    int arr[5];
    int sum =0, min = 100, oddCt = 0;

    for(int i=0; i<num; i++){
        cin>>arr[i];
        sum+=arr[i];
    }

    sort(arr, arr+5);

    cout<<sum/5<<endl;
    cout<<arr[2]<<endl;
    
}