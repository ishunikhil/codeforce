#include <bits/stdc++.h>
#include<cstring>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        string ans="";
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='L'){
                ans=ans+'L';
            }
            else if(s[i]=='R'){
                ans=ans+'R';
            }
            else if(s[i]=='D'){
                ans=ans+'U';
            }
            else{
                ans=ans+'D';
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}