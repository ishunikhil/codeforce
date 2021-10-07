#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int ans=1;
    for(int i=1;i>0;i++){
        n--;
        if(i%m==0){
            n++;
        }
        if(n==0){
            break;
        }
        else{
            ans++;
        }
    }
    cout<<ans;
    return 0;
}