#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }
    else{
        n=-n;
        long long int a=n/10;
        long long int r=n%10;
        long long int b=a%10;
        long long int c=((n-(b*10+r))+(r*10));
        c=c/10;
        long long int ans=min(a,c);
        if(ans==0){
            cout<<"0";
        }
        else{
            cout<<"-"<<ans;
        }
    }
    return 0;
}