#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int c=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        for(int j=2;j<arr[i];j++){
            if(arr[i]%j==0){
                c++;
            }
        }
        if(c==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        c=0;
    }
    return 0;
}