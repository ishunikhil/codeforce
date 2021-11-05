#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
   
    ll v[n];
    v[0]=INT_MIN;
   
    if(n==1){
        cout<<"Alice";
        return 0;
    }
    ll right=arr[n-1];
    ll left=arr[0];
    int c=0,k=1;
    while(n>0){
        if(arr[left]>arr[right]){
            v[k]=arr[left];
            left++;
            c++;
            k++;
        }
        else{
            v[k]==arr[right];
            right--;
            c++;
            k++;
        }
        if(left==right){
            break;
        }
        if(v[k]<v[k-1]){
            c=c-1;
            break;
        }
    }
    if(c%2==0){
        cout<<"Bob";
    }
    else{
        cout<<"Alice";
    }
    return 0;
}