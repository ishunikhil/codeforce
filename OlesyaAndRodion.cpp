#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;string t;
    cin>>n>>t;
    if(t.length()>n){
        cout<<"-1";
        return 0;
    }
    if(t=="10"){
        for(int i=1;i<n;i++){
            cout<<"1";
        }
        cout<<"0";
    }
    else{
        for(int i=1;i<=n;i++){
            cout<<t;
        }
    }
    return 0;
    
}