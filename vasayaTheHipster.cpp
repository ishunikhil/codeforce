#include<bits/stdc++.h>
using namespace std;

int main(){
    int r,b;
    cin>>r>>b;
    int r1=r;
    int b1=b;
    int ans1=0;
    int ans2=0;
    for(int i=1;i>0;i++){
        if(r1>0 && b1>0){
            r1--;
            b1--;
            ans1++;
        }
        else{
            break;
        }
    }
    if(r>b){
        ans2=(r-b)/2;
    }
    else{
        ans2=(b-r)/2;
    }
    cout<<ans1<<" "<<ans2;
    return 0;
}