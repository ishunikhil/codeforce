#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    vector<int> dp(n);
    for(int i=1;i<n;i++){
        cin>>dp[i];
    }
    int next=0;
    for(int i=1;i<n;){
        next=dp[i]+i;
       // cout<<next<<endl;
        if(next==t){
            cout<<"YES"<<endl;
            break;
        }
        else{
            i=next;
            if(next>t){
                cout<<"NO"<<endl;
                break;
            }
        }
    }
    return 0;
}