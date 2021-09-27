#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=0;
    vector<pair<string,string>> v;
    for(int i=0;i<n;i++){
        cin>>v[i].first;
    }
    for(int i=0;i<n;i++){
        v[i].second="";
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){
                if(v[i]==v[j]){
                    
                }
            }
        }
    }
   
}