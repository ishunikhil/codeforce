#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int l=s1.length();
    int c=0;
    string s3=" ";
    for (int i = 0; i < l / 2; i++){
        swap(s1[i], s1[l - i - 1]);
    }
    if(s1==s2){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}
