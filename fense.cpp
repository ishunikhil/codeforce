#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0 ;i<n;i++){
        cin>>v[i];
    }
    vector<int> pref(100005);
    for(int i=0;i<n;i++){
        pref[i+1]=pref[i]+v[i];
    }
    int mini=INT_MAX;
    int dif;
    int index;
    for(int i=0;i<n-k;i++){
        dif=pref[i+k]-pref[i];
        if(dif<mini){
            mini=dif;
            index=i+1;
        }
    }
    cout<<index;

    return 0;
}