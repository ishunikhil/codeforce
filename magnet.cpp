#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int c=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]!=a[i+1]){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}