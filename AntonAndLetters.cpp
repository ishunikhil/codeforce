#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    set<char>k;
    int l=s.length();
    for(int i=0;i<l;i++){
        if(isalpha(s[i])){
            k.insert(s[i]);
        }
    }
    cout<<k.size();
    return 0;
}