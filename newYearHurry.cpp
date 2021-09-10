#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int c=0;
    int s=0;
    for(int i=1;i<=n;i++){
        s=s+(5*i);
        if(s+k>240){
            break;
        }
        else{
            c++;
        }
    }
    cout<<c;
    return 0;
}