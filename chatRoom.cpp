#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    int c=0;
    int index;
    for(int i=0;i<l;i++){
        if(s[i]=='h'){
            c++;
            index=i+1;
            break;
        }
    }
    for(int i=index;i<l;i++){
        if(s[i]=='e'){
            c++;
            index=i+1;
            break;
        }
    }
    for(int i=index;i<l;i++){
        if(s[i]=='l'){
            c++;
            index=i+1;
            break;
        }
    }
    for(int i=index;i<l;i++){
        if(s[i]=='l'){
            c++;
            index=i+1;
            break;
        }
    }
    for(int i=index;i<l;i++){
        if(s[i]=='o'){
            c++;
            index=i+1;
            break;
        }
    }
    if(c==5){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}