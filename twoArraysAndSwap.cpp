#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        int sum=0;
        cin>>n>>k;
        int A[n],B[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        sort(A,A+n);
        sort(B,B+n);
        int c=n-1;
        for(int i=0;i<k;i++){
            if(B[c-i]>A[i]){
                A[i]=B[c-i];
            }
        }
        for(int i=0;i<n;i++){
           sum=sum+A[i]; 
        }
        cout<<sum<<endl;
        t--;
    }
    return 0;
}