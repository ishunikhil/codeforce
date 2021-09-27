#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int c=0;
    int d=0;
    int ans1,ans2;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            c++;
            ans1=i;
        }
        else{
            d++;
            ans2=i;
        }
    }
    if(d<c){
        cout<<ans2+1<<endl;
    }
    else{
        cout<<ans1+1<<endl;
    }
    return 0;
}