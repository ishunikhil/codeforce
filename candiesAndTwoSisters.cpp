#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int ans=0;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            ans=(n/2)-1;
        }
        else{
            ans=n/2;
        }
        cout<<ans<<endl;
    }
}