#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    string n1,n2;
    cin>>n1;
    cin>>n2;
    int l=n1.length();
    char ans[l];
    for(int i=0;i<l;i++){
        if(n1[i]==n2[i]){
            ans[i]='0';
        }
        else{
            ans[i]='1';
        }
    }
    for(int i=0;i<l;i++){
        cout<<ans[i];
    } 
    
    
    return 0;
}