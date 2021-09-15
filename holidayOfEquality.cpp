#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int max=arr[n-1];
    for(int i=0;i<n-1;i++){
        sum=sum+(max-arr[i]);
    }
    cout<<sum;
    return 0;
}