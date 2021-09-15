#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,k;
    int c=0;
    cin>>k>>r;
    for(int i=1;i>0;i++){
        c=i;
        if((i*k)%10==r || (i*k)%10==0){
            break;
        }
    }
    cout<<c;
    return 0;
}