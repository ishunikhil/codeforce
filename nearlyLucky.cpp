#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long int c=0;
    while(n>0){
        long long r=n%10;
        if(r==4 || r==7){
            c++;
        }
        n=n/10;
    }
    if(c==4 || c==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}