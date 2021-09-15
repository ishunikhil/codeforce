#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans="";
        int l=s.length();
        for(int i=1;i<l-1;i+=2){
            ans=ans+s[i];
        }
        cout<<s[0]<<ans<<s[l-1]<<endl;
    }
    return 0;
}