#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,t,r,n;
        cin>>n;
        a=n/6;
        r=n%6;
        if(n<=6){
            t=15;
        }
        else if(r==0){
            t=15*a;
        }
        else if(r!=0 && r<=2){
            t=a*15+5;
        }
        else if(r!=0 && r<=4){
            t=a*15+10;
        }
        else{
            t=(a+1)*15;
        }

        cout<<t<<endl;  
    }
    return 0;
}
