#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    char arr[n];
    strcpy(arr,s.c_str());
    for(int i=1;i<=t;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]=='B' && arr[j+1]=='G'){
                char c=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=c;
                j++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}