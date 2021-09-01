#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main(){
        string s;
        cin>>s;
        int l=s.length();
        char arr[l+1];
        int a[l+1];
        int z=0;
        int p=0;
        strcpy(arr,s.c_str());
        for(int j=0;j<l;j+=2){
            a[z]=arr[j]-48;
            z++;
        }
        sort(a,a+z);
        for(int j=0;j<l;j=j+2){
            arr[j]=a[p]+48;
            p++;
        }
        for(int i=0;i<l;i++){
            cout<<arr[i];
        }
        
    return 0;
}