#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int a,b,c,m;
        int n=0;
        cin>>a>>b>>c>>m;
        if(a==1 && b==1 && c==1){
            cout<<"NO"<<endl;
        }
        else{
            if(a>=m){
                n++;
            }
            if(b>=m){
                n++;
            }
            if(c>=m){
                n++;
            }
            if(n>=m){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        
        t--;
    }
    return 0;
}