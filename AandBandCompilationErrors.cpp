#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int arr1[n],arr2[n-1],arr3[n-2];
    long long int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<n;i++){
        cin>>arr1[i];
        sum1+=arr1[i];
    } 
    for(int i=0;i<n-1;i++){
        cin>>arr2[i];
        sum2+=arr2[i];
    } 
    for(int i=0;i<n-2;i++){
        cin>>arr3[i];
        sum3+=arr3[i];
    }
    cout<<sum1-sum2<<endl;
    cout<<sum2-sum3<<endl; 
    return 0;
}