#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arrh[n];
    int arro[n];
    int c=0;
    for(int i=0;i<n;i++){
        cin>>arrh[i]>>arro[i];      
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arrh[i]==arro[j]){
                c++;
            }
        }
    }
    cout<<c;

    return 0;
}