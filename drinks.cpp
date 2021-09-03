#include <bits/stdc++.h>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double arr[n];
    long double sum=0;
    long double ans=0;
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;


    return 0;
}