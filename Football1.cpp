#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s[n];
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    string check=s[0];
    string alter;
    for(int i=0;i<n;i++){
        if(s[i]==check){
            count1++;
        }
        else{
            alter=s[i];
            count2++;
        }
    }
    if(count1>count2){
        cout<<check;
    }
    else{
        cout<<alter;
    }

    return 0;
}
