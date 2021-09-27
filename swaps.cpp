#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int c=0;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                if(a[i]<b[i+1] && a[i+1]<b[i]){
                    int t=a[i];
                    a[i]=a[i+1];
                    a[i+1]=t;
                    c++;
                    i=0;
                }
            }
        }
        cout<<c<<endl;
        t--;
    }
    return 0;
}