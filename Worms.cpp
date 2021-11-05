#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nowar[n];
    for(int i=0;i<n;i++){
        cin>>nowar[i];
    }
    int j;
    cin>>j;
    int jw[j];
    for(int i=0;i<j;i++){
        cin>>jw[i];
    }
    vector<pair<int,int>>v;
    v.push_back( make_pair(1,nowar[0]) );
    for(int i=1;i<n;i++){
        v.push_back( make_pair(v[i-1].second+1,v[i-1].second+nowar[i]) );
    }
    //for(int i=0;i<n;i++){
    //    cout<<v[i].first<<" "<<v[i].second<<endl;
    //}
    int c=0;
    while(c<j){
        for(int i=0;i<n;i++){
            if(jw[c]>=v[i].first && jw[c]<=v[i].second){
                cout<<i+1<<endl;
            }
        }
        c++;
    }
    return 0;
}