#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<char,char>>v(5);
    string s;
    cin>>s;
    string temp;
    string ans="NO";
    for(int i=0;i<5;i++){
        cin>>temp;
        v[i].first=temp[0];
        v[i].second=temp[1];
    }
    for(int i=0;i<5;i++){
        if(s[0]==v[i].first || s[1]==v[i].second){
            ans="YES";
        }
    }
    cout<<ans;
    return 0;
}