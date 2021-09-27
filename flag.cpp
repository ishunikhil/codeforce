#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    string arr[m];
    int c=0;
    for(int i=0 ;i<m;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[i][j]!=arr[i][j+1]){
            c++;
            break;
            }
        }
        if(arr[i]==arr[i+1]){
            c++;
            break;
        }
    }
    for(int i=0;i<n-1;i++){
        if(arr[m-1][i]!=arr[m-1][i+1]){
            c++;
            break;
        }
    }
    if(c>0){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }

    return 0;
}