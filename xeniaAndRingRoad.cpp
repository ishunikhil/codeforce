#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    long long int c=0;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    c=c+(a[0]-1);
    for(int i=1;i<m;i++){
        if(a[i]<a[i-1]){
            c=c+((n-a[i-1])+a[i]);
        }
        else{
            c=c+(a[i]-a[i-1]);
        }
    }
    cout<<c;
    return 0;
}