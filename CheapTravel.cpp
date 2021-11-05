#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int ans=0;
    while(n>0){
        if(n<m){
            if(b>=n*a){
                ans=ans+(n*a);
            }
            else{
                ans=ans+b;
            }
            n=0;
        }
        else{
            if(b/m<a){
                n=n-m;
                ans=ans+b;
            }
            else{
                ans=ans+(n*a);
                n=0;
            }
        }
    }
    cout<<ans;
    return 0;
}