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
        if(a[i]==1){
            c++;
        }
    }
    if(c>0){
        cout<<"HARD"<<endl;
    }
    else{
        cout<<"Easy";
    }
    return 0;
}