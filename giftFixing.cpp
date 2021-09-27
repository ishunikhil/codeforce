#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        int A[n],B[n];
        long long int ans=0;
        
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        int minA=A[0];
        int minB=B[0];
        for(int i=1;i<n;i++){
            if(A[i]<minA){
                minA=A[i];
            }
            if(B[i]<minB){
                minB=B[i];
            }
        }
        for(int i=0;i<n;i++){
            ans=ans+(abs((A[i]-minA)-(B[i]-minB))+min(A[i]-minA,B[i]-minB));
        }
        cout<<ans<<endl;

        t--;
    }
    return 0;
}