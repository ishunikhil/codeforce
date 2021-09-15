#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int c=0;
    int ans;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]+k<6){
            c++;
        }
    }
    ans=c/3;
    cout<<ans;
    return 0;
}