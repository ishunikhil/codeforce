#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
       int x,y;
       cin>>x>>y;
       v.push_back(make_pair(x, y));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(s<=v[i].first){
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            s=s+v[i].second;
        }
    }

    cout<<"YES"<<endl;
}