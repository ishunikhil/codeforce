#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int arr[n];
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>h){
            ans+=2;
        }
        else{
            ans++;
        }
    }
    cout<<ans<<endl;

    return 0;
}