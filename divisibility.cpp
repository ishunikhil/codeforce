#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t>0){
        long long a,b;
        long long c=0;
        cin>>a>>b;
        if(a%b==0){
            cout<<"0"<<endl; 
        }
        else{
            int z=a%b;
            cout<<b-z<<endl;
        }
        t--;
    }
    return 0;
}