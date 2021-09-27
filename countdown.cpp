#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int c=0;
        for(int i=0;i<n;i++){
            if(s[i]-'0'!=0){
                //cout<<s[i]-'0'<<endl;
                c=c+1;
                c=c+(s[i]-'0');
            }
        }
        if(s[n-1]-'0'!=0){
            c=c-1;
        }
        cout<<c<<endl;
        
        t--;
    }
    return 0;
}