#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    int ans=0;
    cin>>n;
    int arrN[n];
    for(int i=0;i<n;i++){
        cin>>arrN[i];
    }
    cin>>m;
    int arrM[m];
    for(int i=0;i<m;i++){
        cin>>arrM[i];
    }
    sort(arrN,arrN+n);
    sort(arrM,arrM+m);
    int k=0;
    if(n>m){ 
        for(int i=0;i<m;i++){
            for(int j=k;j<n;j++){ 
                if(arrM[i]==arrN[j] || arrM[i]==arrN[j]+1 || arrM[i]+1==arrN[j]){
                    ans=ans+1;
                    k=j+1;
                    break;
                }
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            for(int j=k;j<m;j++){ 
                if(arrN[i]==arrM[j] || arrN[i]==arrM[j]+1 || arrN[i]+1==arrM[j]){
                    ans=ans+1;
                    k=j+1;
                    break;
                }
            }
        }
    }
    cout<<ans;
    
    return 0;
}