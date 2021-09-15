#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int c=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min=arr[0];
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            c++;
            min=arr[i];
        }
        if(arr[i]>max){
            c++;
            max=arr[i];
        }
    }
    cout<<c;
    return 0;
}