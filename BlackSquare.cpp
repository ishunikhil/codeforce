#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,a3,a4;
    cin>>a1>>a2>>a3>>a4;
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1'){
            count+=a1;
        }
        else if(s[i]=='2'){
            count+=a2;
        }
        else if(s[i]=='3'){
            count+=a3;
        }
        else{
            count+=a4;
        }
    }
    cout<<count;
    return 0;
}