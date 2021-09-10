#include<bits/stdc++.h>
#include<string>
using namespace std;

bool isPrime(int n);

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        string s;
        cin>>s;
        if((s[0]-'0'!=2) && (s[0]-'0'!=3) && (s[0]-'0'!=5) && (s[0]-'0'!=7)){
            cout<<"1"<<endl;
            cout<<s[0];
        }
        else{
            
    
        }
   
        return 0;
    }

}
bool isPrime(int n){
    int c=0;
    bool ans;
    for(int i=1;i<n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c>1){
        ans=false;
    }
    else{
        ans=true;
    }
    return ans;
}