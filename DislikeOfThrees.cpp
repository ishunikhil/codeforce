#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int k;
        cin>>k;
        int ans;
        ans=0;
        for(int i=1;i<=k;i++){
            if(i%10==3){
                k=k+1;
            }
            else if(i%3==0){
                k=k+1;
            }
            ans=i;
        }
        cout<<ans<<endl;       
        t--;
    }
    return 0;
}
