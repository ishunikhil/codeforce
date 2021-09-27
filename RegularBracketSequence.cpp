#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        string s="";
        cin>>n;
        for(int i=1;i<=n;i++){
            s=s+"()";
        }
        cout<<s<<endl;
        int c=1;
        while(c<2*n-1){
            s[c]='(';
            s[c+1]=')';
            c=c+2;
            cout<<s<<endl;
           
        }
        t--;
    }
    return 0;
}