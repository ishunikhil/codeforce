#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        string s;
        cin>>s;
        int l=s.length();
        int sum=0;
        int n=s[0]-'0';
        sum=(n-1)*10;
        for(int i=1;i<=l;i++){
            sum=sum+i;
        }
        cout<<sum<<endl;
        t--;
    }
    return 0;
}