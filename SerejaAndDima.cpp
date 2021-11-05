#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int front=1;
    int rare=n;
    int sereja=0;
    int dima=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            if(arr[front]>=arr[rare]){
                sereja+=arr[front];
                front++;
            }
            else{
                sereja+=arr[rare];
                rare--;
            }

        }
        else{
            if(arr[front]>=arr[rare]){
                dima+=arr[front];
                front++;
            }
            else{
                dima+=arr[rare];
                rare--;
            }   
        }
    }
    cout<<sereja<<" "<<dima;
    return 0;
}