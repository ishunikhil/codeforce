#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    int sum=0;
    int c=0;
    int k=1;
    int neg[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){
            neg[c]=abs(arr[i]);
            c++;
        }
    }
    sort(neg, neg + c, greater<int>());
    for(int i=0;i<c;i++){
        if(k<=m){
           sum=sum+neg[i];
           k++; 
        }
        else{
            break;
        }
    }
    cout<<sum;
}