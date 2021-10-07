#include <bits/stdc++.h>
using namespace std;

int main(){
    long long x;
    cin>>x;
    long long ans=0;
    long long mult=1;
    for(long long i=1;i>0;i++){
        if(x==1){
            ans++;
            //cout<<".2"<<endl;
            break;
        }
        if(mult==x){
            ans=1;
            //cout<<".1"<<endl;
            break;
        }
        else if(mult*2<=x){
            mult=mult*2;
            //cout<<".3"<<endl;
        }
        else{
            x=x-mult;
            mult=1;
            ans++;
            cout<<".4"<<endl;
        }
    }
    cout<<ans;
    return 0;
}