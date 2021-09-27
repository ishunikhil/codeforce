#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    int ans[m];
    int c=0;
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    for(int i=0;i<m-(n-1);i++){
        ans[c]=a[i+(n-1)]-a[i];
        //cout<<ans[c]<<endl;
        c++;
    }
    int min=ans[0];
    for(int i=1;i<c;i++){
        if(ans[i]<min){
            min=ans[i];
        }
    }
    cout<<min<<endl;
    return 0;
}