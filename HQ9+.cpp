#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l=s.length();
    string ans="NO";
    for(int i=0;i<l;i++){
        if(s[i]=='H'){
            ans="YES";
        }
        else if(s[i]=='Q'){
            ans="YES";
        }
        else if(s[i]=='9'){
            ans="YES";
        }
    }
    cout<<ans;
    return 0;
}