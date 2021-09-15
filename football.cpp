#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int l=s.length();
    int arr[l+1];
    arr[l+1]=2;
    int c=1;
    int d=0;
    string ans;
    for(int i=0;i<l;i++){
        if(s[i]==s[i+1]){
            c++;
        }
        else{
            c=c+1;
            arr[d]=c;
            c=0;
            d++;
        }
    }
    arr[0]=arr[0]-1;
    for(int i=0;i<=d-1;i++){
        if(arr[i]>6){
            ans="YES";
            break;
        }
        else{
            ans="NO";
        }
    }
    cout<<ans;
    return 0;
}
