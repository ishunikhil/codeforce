#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=s.length();
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i=0;i<l;i++){
        if(!(s[i]=='a'||s[i]=='e'|| s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')){
            cout<<"."<<s[i];
        }
    }
    return 0;
    }