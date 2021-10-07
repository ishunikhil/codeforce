#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int a=0,b=0;
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'|| s[i]=='C'){
                a++;
            }
            else{
                b++;
            }
        }
        //cout<<a<<" "<<b<<endl;
        if(a==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}