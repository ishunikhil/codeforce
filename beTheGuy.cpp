#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    int arr[p];
    int c=0;
    for(int i=0;i<p;i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    int arr2[p+q];
    int ans[n];
    for(int i=1;i<=n;i++){
        ans[i]=0;
    }
    for(int i=p;i<p+q;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<p;i++){
        arr2[i]=arr[i];
    }
    for(int i=0;i<p+q;i++){
        int z=arr2[i];
        ans[z]=1;
    }
    for(int i=1;i<=n;i++){
        if(ans[i]==0){
            c++;
        }
    }
    if(c>0){
        cout<<"Oh, my keyboard!";
    }
    else{
        cout<<"I become the guy.";
    }
    
    

    return 0;
}
