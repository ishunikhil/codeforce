#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    int max=arr[3];
    for(int i=0;i<3;i++){
        cout<<max-arr[i]<<" ";
    }
    return 0;
}